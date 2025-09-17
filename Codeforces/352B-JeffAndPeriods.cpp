#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    int n;cin>>n;
    vector<PII>arr(n);
    vector<int>count((ll)1e5+1);
    for(int i=0;i<n;i++){
        int it;cin>>it;
        arr[i]={it,i};
        count[it]++;
    }
    sort(all(arr));
    set<PII>final_arr;
    for(int i=0;i<n-1;i++){
        if(count[arr[i].first]==1){
            final_arr.insert({arr[i].first,0});
            continue;
        }else{
            int d=arr[i+1].second-arr[i].second;
            bool flag=1;
            while(arr[i+1].first==arr[i].first&&i<=n-1){
                if(arr[i+1].second-arr[i].second==d){
                    i++;
                }else{
                    i++;flag=0;
                }
            }
            if(flag){
                final_arr.insert({arr[i].first,d});
            }
        }
    }
    if(count[arr[n-1].first]==1){
        final_arr.insert({arr[n-1].first,0});
    }
    cout<<final_arr.size()<<endl;
    for(auto element:final_arr){
        cout<<element.first<<" "<<element.second<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}