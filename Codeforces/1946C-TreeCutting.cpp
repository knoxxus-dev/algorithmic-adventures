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

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

bool binfunc(vector<vector<ll>>&adj,vector<ll>&size,ll cur,ll par,ll x,ll &k){
    ll ans=0;
    for(auto node:adj[cur]){
        if(node==par)continue;
        binfunc(adj,size,node,cur,x,k);
        ans+=size[node];
    }
    if(ans+1>=x&&k>=1){
        size[cur]=0;
        k--;
    }else{
        size[cur]=ans+1;
    }
    if(k<=0&&size[cur]>=x){
        return true;
    }else{
        return false;
    }
}

void sol(){
    ll n,k;cin>>n>>k;
    vector<vector<ll>>adj(n+1);
    for(int i=0;i<n-1;i++){
        ll a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    ll l=1,r=n;
    vector<ll>size(n+1);
    while(r-l>1){
        ll mid=(l+r)/2;
        ll temp=k;
        for(auto &it:size)it=0;
        if(binfunc(adj,size,1,0,mid,temp)){
            l=mid;
        }else{
            r=mid;
        }
    }
    cout<<l<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}