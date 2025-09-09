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
    int n,ind;cin>>n>>ind;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    int x=arr[ind-1];
    int count=0,count1=0,count2=0;
    bool flag=0;
    int it=0;
    while(count<2&&it<n){
        if(count<1){
            if(x>arr[it]){
                count1++;
            }else if(x==arr[it]){
                count++;
                flag=1;
            }else{
                count++;
            }
        }else{
            if(x>arr[it]){
                count2++;
            }else{
                count++;
            }
        }
        it++;
    }
    if(flag){
        cout<<count1+count2<<endl;
    }else{
        if(count1==0){
            cout<<count2<<endl;
        }else{
            cout<<max(--count1,++count2)<<endl;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}