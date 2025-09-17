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
const ll INF=1e10;
const ld EPS=1e-9;

using namespace std;

void sol(){
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>>arr(n);
    ll total=0;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        arr[i]={a,b};
        total+=(a+b);
    }
    if(total<k){
        cout<<-1<<endl;
        return;
    }
    vector<vector<ll>>cost(n,vector<ll>(k+1,INF));
    for(int i=0;i<n;i++){
        ll mxr=arr[i].first;
        ll mxc=arr[i].second;
        for(int a=0;a<=mxr;a++){
            for(int b=0;b<=mxc;b++){
                if(a+b<=k)cost[i][a+b]=min(cost[i][a+b],a*mxc+b*mxr-a*b);
            }
        }
    }
    vector<vector<ll>>dp(n,vector<ll>(k+1,INF));
    for(int i=0;i<n;i++){
        if(i==0){
            for(int j=0;j<=k;j++){
                dp[i][j]=cost[i][j];
            }
        }else{
            for(int j=0;j<=k;j++){
                for(int l=0;l<=j;l++){
                    dp[i][j]=min(dp[i][j],dp[i-1][j-l]+cost[i][l]);
                }
            }
        }
    }
    cout<<dp[n-1][k]<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}