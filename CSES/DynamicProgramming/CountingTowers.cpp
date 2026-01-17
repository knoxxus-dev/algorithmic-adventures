#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e6+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol() {
    ll t; cin >> t;
    vector<pair<ll, ll>> dp(MAX_N, {0, 0});
    dp[1].first = 1;
    dp[1].second = 1;
    for(ll i = 2; i <= MAX_N; i++) {
        dp[i].first = 2 * dp[i - 1].first + dp[i - 1].second;
        dp[i].second = dp[i - 1].first + 4 * dp[i - 1].second;
        dp[i].first %= MOD;
        dp[i].second %= MOD;
 
    }
    while(t--) {
        ll n; cin >> n;
        ll ans = dp[n].first + dp[n].second;
        ans %= MOD;
        cout << ans << endl;
    }
}

int main() {
    IOS;
    sol();
    return 0;
}