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
const ll MOD=998244353;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    ll n,m,k;cin>>n>>m>>k;
    vector<vector<ll>>dp(n,vector<ll>(k+1,0));
    dp[0][0]=m;
    for(int i=1;i<n;i++){
        for(int j=0;j<=k;j++){
            if(j==0){
                dp[i][j]=m;
                continue;
            }
            if(i+1==j){
                break;
            }
            dp[i][j]=dp[i-1][j]+(dp[i-1][j-1]*(m-1))%MOD;
            dp[i][j]%=MOD;
        }
    }
    cout<<dp[n-1][k]<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}