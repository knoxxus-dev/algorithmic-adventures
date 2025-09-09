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

const int MAX_N=2e5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    ll n,k,q;cin>>n>>k>>q;
    vector<ll>arr(MAX_N);
    while(n--){
        ll l,r;cin>>l>>r;
        arr[l-1]++;
        if(r!=MAX_N)arr[r]--;
    }
    for(int i=1;i<MAX_N;i++){
        arr[i]+=arr[i-1];
    }
    for(auto &it:arr){
        if(it>=k){
            it=1;
        }else{
            it=0;
        }
    }
    for(int i=1;i<MAX_N;i++){
        arr[i]+=arr[i-1];
    }
    while(q--){
        ll a,b;cin>>a>>b;
        ll ans=0;
        if(a!=1)ans-=arr[a-2];
        ans+=arr[b-1];
        cout<<ans<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}