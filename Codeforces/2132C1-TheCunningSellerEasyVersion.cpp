#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

long long binexp(long long base, long long exp, long long mod = LLONG_MAX) {
    base %= mod;
    long long res = 1;
    while(exp > 0) {
        if(exp & 1) {
            res = res * base % mod;
        }
        base = base * base % mod;
        exp >>= 1;
    }
    return res;
}

ll coin_value(ll x) {
    if(x == 0) {
        return 3;
    }
    return binexp(3, x + 1) + x * binexp(3, x - 1);
}

void sol(){
    ll n; cin >> n;
    vector<ll> possible_deals;
    ll ans = 0;
    for(int i = 0; i < 19; i++) {
        possible_deals.pb(binexp(3, i));
    }
    for(int i = 18; i >= 0; i--) {
        if(n >= possible_deals[i]) {
            ll deal_count = n / possible_deals[i];
            ans += deal_count * coin_value(i);
            n %= possible_deals[i];
        }
    }
    cout << ans << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}