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

void child(vector<bool>&visited,vector<int>adj[],vector<ll>&children,int current,int parent){
    visited[current]=true;
    if(adj[current].size()==1&&parent!=0){
        children[current]=1;
        return;
    }
    ll sum=0;
    for(auto u:adj[current]){
        if(u==parent)continue;
        child(visited,adj,children,u,current);
        sum+=children[u];
    }
    children[current]=sum;
}

void sol(){
    int n;cin>>n;
    vector<bool>visited(n+1);
    vector<int>adj[n+1];
    vector<ll>children(n+1);
    for(int i=1;i<=n-1;i++){
        int a,b;cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    child(visited,adj,children,1,0);
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
        cout<<children[x]*children[y]<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}