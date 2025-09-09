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
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    vector<array<ll,3>>ops(m);
    for(int i=0;i<m;i++){
        ll a,b,d;cin>>a>>b>>d;
        ops[i]={a,b,d};
    }
    vector<ll>queries(m,0);
    while(k--){
        ll x,y;cin>>x>>y;
        queries[x-1]++;
        if(y!=m)queries[y]--;
    }
    for(int i=1;i<m;i++){
        queries[i]+=queries[i-1];
    }
    vector<ll>ans(n);
    for(int i=0;i<m;i++){
        ll l=ops[i][0];
        ll r=ops[i][1];
        ll d=ops[i][2];
        d*=queries[i];
        ans[l-1]+=d;
        if(r!=n)ans[r]-=d;
    }
    for(int i=1;i<n;i++){
        ans[i]+=ans[i-1];
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]+arr[i]<<" ";
    }
}

int main(){
    IOS;
    sol();
    return 0;
}