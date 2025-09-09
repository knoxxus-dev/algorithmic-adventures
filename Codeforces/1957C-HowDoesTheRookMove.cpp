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
    ll n,k;cin>>n>>k;
    ll visited=0;
    for(int i=0;i<k;i++){
        ll a,b;cin>>a>>b;
        if(a==b)visited++;
        else visited+=2;
    }
    ll left=n-visited;
    vector<ll>dp(left+1);
    if(left==0){
        cout<<1<<endl;
        return;
    }
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=left;i++){
        dp[i]=(dp[i-1]+2*(i-1)*dp[i-2])%MOD;
    }
    cout<<dp[left]<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}