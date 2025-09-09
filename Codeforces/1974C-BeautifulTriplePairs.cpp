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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

ll count(ll n){
    return n*(n-1)/2;
}

void sol(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    vector<map<pair<int,int>,ll>>c(3);
    vector<map<pair<int,int>,map<int,ll>>>m(3);
    for(int i=0;i<n-2;i++){
        ll x=a[i];
        ll y=a[i+1];
        ll z=a[i+2];
        c[0][{x,y}]++;
        c[1][{y,z}]++;
        c[2][{z,x}]++;
        m[0][{x,y}][z]++;
        m[1][{y,z}][x]++;
        m[2][{z,x}][y]++;
    }
    ll ans=0;
    for(int i=0;i<n-2;i++){
        ll x=a[i];
        ll y=a[i+1];
        ll z=a[i+2];
        ans+=(c[0][{x,y}]-m[0][{x,y}][z]);
        ans+=(c[1][{y,z}]-m[1][{y,z}][x]);
        ans+=(c[2][{z,x}]-m[2][{z,x}][y]);
        c[0][{x,y}]--;
        c[1][{y,z}]--;
        c[2][{z,x}]--;
        m[0][{x,y}][z]--;
        m[1][{y,z}][x]--;
        m[2][{z,x}][y]--;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}