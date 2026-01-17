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
    ll n; cin >> n;
    vector<string> grid;
    for(ll i = 0; i < n; i++) {
        string row; cin >> row;
        grid.push_back(row);
    }

    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));
    if(grid[0][0] == '.') {
        dp[1][1] = 1;
    }
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= n; j++) {
            if(grid[i - 1][j - 1] != '*') {
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }
    cout << dp[n][n] << endl;
}

int main() {
    IOS;
    sol();
    return 0;
}