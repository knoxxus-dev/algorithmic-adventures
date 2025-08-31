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

vector<ll> possible_deals(19, 0);
vector<ll> deal_values(19, 0);

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
    ll n, k; cin >> n >> k;
    ll ans = 0;
    ll min_deals = 0;
    vector<ll> deal_count(19, 0);
    for(int i = 18; i >= 0; i--) {
        if(n >= possible_deals[i]) {
            deal_count[i] = n / possible_deals[i];
            min_deals += deal_count[i];
            n %= possible_deals[i];
        }
    }
    if(min_deals > k) {
        cout << -1 << endl;
    } else {
        ll excess_deals = k - min_deals;
        ll convert_deals = excess_deals / 2;
        ll ans = 0;
        for(int i = 18; i >= 1; i--) {
            if(deal_count[i] >= convert_deals) {
                deal_count[i] -= convert_deals;
                deal_count[i - 1] += convert_deals * 3;
                break;
            } else {
                deal_count[i - 1] += deal_count[i] * 3;
                convert_deals -= deal_count[i];
                deal_count[i] = 0;
            }
        }
        for(int i = 0; i < 19; i++) {
            ans += deal_count[i] * coin_value(i);
        }
        cout << ans << endl;
    }
}

int main(){
    IOS;
    for(int i = 0; i < 19; i++) {
        possible_deals[i] = binexp(3, i);
        deal_values[i] = coin_value(i);
    }
    int t;cin>>t;while(t--) sol();
    return 0;
}