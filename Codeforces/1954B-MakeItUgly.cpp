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
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    int x=arr[0];
    int min_count=INT_MAX;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }else{
            min_count=min(min_count,count);
            count=0;
        }
    }
    min_count=min(min_count,count);
    if(min_count==n){
        cout<<-1<<endl;
    }else{
        cout<<min_count<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}