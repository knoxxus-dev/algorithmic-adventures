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

ll returnVal(ll l,ll r){
    return (r*(r+1))/2-(l*(l+1))/2;
}

void sol(){
    ll n,a;cin>>n>>a;
    ll l=a;
    ll r=l+n-1;
    ll ans=LLONG_MAX;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll pos=returnVal(a-1,mid);
        ll neg=returnVal(mid,a+n-1);
        ans=min(ans,abs(pos-neg));
        if(pos>neg){
            r=mid-1;
        }else if(pos<neg){
            l=mid+1;
        }else{
            break;
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}