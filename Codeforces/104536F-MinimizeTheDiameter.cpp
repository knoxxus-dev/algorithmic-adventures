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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void dfs(vector<vector<ll>>&adj,ll cur,ll par,ll &maxNode,ll &maxDist,ll distance){
    distance++;
    if(distance>maxDist){
        maxDist=distance;
        maxNode=cur;
    }
    for(auto node:adj[cur]){
        if(node==par)continue;
        dfs(adj,node,cur,maxNode,maxDist,distance);
    }
}

ll returnDiam(vector<vector<ll>>&adj){
    ll maxNode=1;
    ll maxDist=0;
    dfs(adj,1,-1,maxNode,maxDist,-1);
    maxDist=0;
    dfs(adj,maxNode,-1,maxNode,maxDist,-1);
    return maxDist;
}

void sol(){
    ll n;cin>>n;
    vector<vector<ll>>adj1(n+1);
    for(int i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        adj1[a].pb(b);
        adj1[b].pb(a);
    }
    ll diam1=returnDiam(adj1);
    cin>>n;
    vector<vector<ll>>adj2(n+1);
    for(int i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        adj2[a].pb(b);
        adj2[b].pb(a);
    }
    ll diam2=returnDiam(adj2);
    ll totalDiam=(diam1+1)/2+(diam2+1)/2+1;
    cout<<max({diam1,diam2,totalDiam});
}

int main(){
    IOS;
    sol();
    return 0;
}