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
    ll n;cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    vector<vector<ll>>dp(2,vector<ll>(n,0));
    dp[0][0]=arr[0];
    dp[1][0]=INF;
    for(int i=1;i<n;i++){
        ll zerotwoskip;
        if(i==1){
            zerotwoskip=arr[i-1]+arr[i];
            dp[1][i]=arr[0];
        }else{
            zerotwoskip=dp[1][i-2]+arr[i-1]+arr[i];
            dp[1][i]=min(dp[0][i-1],dp[0][i-2]);
        }
        dp[0][i]=min(dp[1][i-1]+arr[i],zerotwoskip);
    }
    cout<<min(dp[0][n-1],dp[1][n-1])<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}