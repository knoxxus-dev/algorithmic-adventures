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

long long binpow(long long a, long long b) {
    a %= MOD;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void sol(){
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    vector<ll> pos_a(n), pos_b(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        pos_a[a[i]] = i;    
    }
    for(ll i = 0; i < n; i++) {
        cin >> b[i];   
        pos_b[b[i]] = i;    
    }
    vector<ll> ans;
    ll a_max = -1;
    ll b_max = -1;
    for(ll i = 0; i < n; i++) {
        a_max = max(a_max, a[i]);
        b_max = max(b_max, b[i]);
        ll a_ind = pos_a[a_max];
        ll b_ind = pos_b[b_max];
        ll a_rev = i - a_ind;
        ll b_rev = i - b_ind;
        ll topush;
        if(a_max > b_max) {
            topush = binpow(2, a[a_ind]) + binpow(2, b[a_rev]);
        } else if(b_max > a_max) {
            topush = binpow(2, b[b_ind]) + binpow(2, a[b_rev]);
        } else {
            if(b[a_rev] > a[b_rev]) {
                topush = binpow(2, a[a_ind]) + binpow(2, b[a_rev]); 
            } else {
                topush = binpow(2, b[b_ind]) + binpow(2, a[b_rev]);
            }
        }
        topush %= MOD;
        ans.pb(topush);
    }
    for(auto &it: ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}