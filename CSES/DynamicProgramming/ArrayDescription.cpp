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

void sol() {
    ll n, m; cin >> n >> m;
    vector<ll> arr(n + 1);
    for(ll i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    ll dp[n + 1][m + 2] = { 0 };
    if(arr[1] == 0) {
        for(ll i = 1; i <= m; i++) {
            dp[1][i] = 1;
        }
    } else {
        dp[1][arr[1]] = 1;
    }
    for(ll i = 2; i <= n; i++) {
        if(arr[i] == 0) {
            for(ll j = 1; j <= m; j++) {
                dp[i][j] = ((dp[i - 1][j - 1] + dp[i - 1][j]) % MOD) + dp[i - 1][j + 1];
                dp[i][j] %= MOD;
            }
        } else {
            dp[i][arr[i]] = ((dp[i - 1][arr[i] - 1] + dp[i - 1][arr[i]]) % MOD) + dp[i - 1][arr[i] + 1];
            dp[i][arr[i]] %= MOD;
        }
    }
    ll sum = 0;
    for(ll i = 1; i <= m; i++) {
        sum += dp[n][i];
        sum %= MOD;
    }    
    cout << sum;
}

int main() {
    IOS;
    sol();
    return 0;
}