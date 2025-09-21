#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

double dfs(vector<vector<ll>>&adj,ll current,ll parent){
    if(adj[current].size()==1&&current!=0)return 0;
    double x=0;
    ll count=0;
    for(auto node:adj[current]){
        if(node==parent)continue;
        x+=dfs(adj,node,current);
        count++;
    }
    return x/(double)count+1;
}

void sol(){
    ll n;cin>>n;
    vector<vector<ll>>adj(n);
    for(int i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        a--;b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    cout<<setprecision(10);
    cout<<dfs(adj,0,-1)<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}