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
    vector<int>pre(n);
    pre[0]=-1;
    for(int i=1;i<n;i++){
        if(arr[i-1]==arr[i]){
            pre[i]=pre[i-1];
        }else{
            pre[i]=i-1;
        }
    }
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        --a;--b;
        if(a<=pre[b]){
            cout<<pre[b]+1<<" "<<b+1<<endl;
        }else{
            cout<<"-1 -1"<<endl;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--){
        sol();
    }
    return 0;
}