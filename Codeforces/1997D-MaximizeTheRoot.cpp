#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pii pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define uii unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=2e5+5;
const ll MOD=1e9+7;
const ll INF=1e9+10;
const ld EPS=1e-9;

using namespace std;

ll dfs(ll cur,ll par,vector<ll>&arr,vector<ll>&parents,vector<vector<ll>>&adj){
    if(adj[cur].size()==1)return arr[cur];
    ll mn=INF;
    for(auto node:adj[cur]){
        if(node==par)continue;
        mn=min(mn,dfs(node,cur,arr,parents,adj));
    }
    if(arr[cur]>=mn)return mn;
    else return (arr[cur]+mn)/2;
}

void sol(){
    ll n;cin>>n;
    vector<ll>arr(n+1),parents(n+1);
    vector<vector<ll>>adj(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    parents[1]=0;
    for(int i=2;i<=n;i++){
        cin>>parents[i];
        adj[i].pb(parents[i]);
        adj[parents[i]].pb(i);
    }
    ll mn=INF;
    for(auto node:adj[1]){
        mn=min(mn,dfs(node,1,arr,parents,adj));
    }
    cout<<mn+arr[1]<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--){
        sol();
    }
    return 0;
}