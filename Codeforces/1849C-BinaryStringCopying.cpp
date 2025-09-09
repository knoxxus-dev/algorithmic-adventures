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
    string s;cin>>s;
    vector<ll>lzero(n),rone(n);
    if(s[0]=='0'){
        lzero[0]=0;
    }else{
        lzero[0]=-1;
    }
    if(s[n-1]=='1'){
        rone[n-1]=n-1;
    }else{
        rone[n-1]=n;
    }
    for(int i=1;i<n;i++){
        lzero[i]=lzero[i-1];
        if(s[i]=='0')lzero[i]=i;
    }
    for(int i=n-2;i>=0;i--){
        rone[i]=rone[i+1];
        if(s[i]=='1')rone[i]=i;
    }
    set<pair<ll,ll>>unique;
    while(q--){
        ll l,r;cin>>l>>r;
        ll l1=rone[l-1];
        ll r1=lzero[r-1];
        if(l1>r1){
            unique.insert({-1,-1});
        }else{
            unique.insert({l1,r1});
        }
    }
    cout<<unique.size()<<endl; 
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}