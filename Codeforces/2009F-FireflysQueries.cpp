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
    ll n,q;cin>>n>>q;
    vector<ll>arr(n+1),prefix(2*n+1);
    ll totalSum=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        totalSum+=arr[i];
    }
    for(int i=1;i<=n;i++){
        arr.pb(arr[i]);
    }
    for(int i=1;i<=2*n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
    while(q--){
        ll l,r;cin>>l>>r;
        ll lr=(l-1)/n+1;
        ll rr=(r-1)/n+1;
        ll ans=0;
        l=(l-1)%n+1;
        r=(r-1)%n+1;
        l--;r--;
        if(lr!=rr){
            ans=(rr-lr-1)*totalSum;
            ans+=prefix[lr+n-1]-prefix[lr+l-1];
            ans+=prefix[rr+r]-prefix[rr-1];
            cout<<ans<<endl;
        }else{
            ans=prefix[rr+r]-prefix[lr+l-1];
            cout<<ans<<endl;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}