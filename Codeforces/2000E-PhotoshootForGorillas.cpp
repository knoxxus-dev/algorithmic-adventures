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

void sol(){
    ll n,m,k;cin>>n>>m>>k;
    ll w;cin>>w;
    vector<ll>gr(w);
    for(auto &it:gr)cin>>it;
    vector<vector<ll>>grid(n,vector<ll>(m,0));
    for(int i=0;i<=n-k;i++){
        for(int j=0;j<=m-k;j++){
            grid[i][j]++;
            if(j+k<m)grid[i][j+k]--;
            if(i+k<n)grid[i+k][j]--;
            if(i+k<n&&j+k<m)grid[i+k][j+k]++;
        }
    }
    vector<ll>mx;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0&&j==0){
                continue;
            }else if(i==0){
                grid[i][j]+=grid[i][j-1];
            }else if(j==0){
                grid[i][j]+=grid[i-1][j];
            }else{
                grid[i][j]+=grid[i-1][j]+grid[i][j-1];
                grid[i][j]-=grid[i-1][j-1];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mx.pb(grid[i][j]);
        }
    }
    sort(all(mx),greater<ll>());
    sort(all(gr),greater<ll>());
    ll ans=0;
    for(int i=0;i<w;i++){
        ans+=gr[i]*mx[i];
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}