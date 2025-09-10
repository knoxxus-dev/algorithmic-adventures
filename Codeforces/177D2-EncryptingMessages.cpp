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
    ll n,m,c;cin>>n>>m>>c;
    vector<ll>arr1(n),arr2(m);
    for(auto &it:arr1)cin>>it;
    for(auto &it:arr2)cin>>it;
    vector<ll>prefix(m+1);
    for(ll i=1;i<=m;i++){
        prefix[i]=arr2[i-1]+prefix[i-1];
    }
    for(ll i=0;i<n;i++){
        ll add=prefix[min(i+1,m)];
        ll sub=prefix[max(i-n+m,0LL)];
        cout<<(arr1[i]+add-sub)%c<<" ";
    }
}

int main(){
    IOS;
    sol();
    return 0;
}