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

const int MAX_N = 2e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

vector<ll>fact(MAX_N);

ll binpow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b&1)res=(res*a)%MOD;
        a=(a*a)%MOD;
        b/=2;
    }
    return res;
}

ll bc(ll n,ll k){
    if(n<k)return 0;
    return (fact[n]*(binpow((fact[k]*fact[n-k])%MOD,MOD-2)))%MOD;
}

void sol(){
    ll n,k;cin>>n>>k;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    ll xcount=0,ycount=0;
    for(auto it:arr){
        if(it){
            xcount++;
        }else{
            ycount++;
        }
    }
    ll ans=0;
    for(int i=k/2+1;i<=min(xcount,k);i++){
        ans+=(bc(xcount,i)*bc(ycount,k-i))%MOD;
        ans%=MOD;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    fact[0]=1;
    for(int i=1;i<MAX_N;i++){
        fact[i]=(fact[i-1]*i)%MOD;
    }
    int t;cin>>t;while(t--) sol();
    return 0;
}