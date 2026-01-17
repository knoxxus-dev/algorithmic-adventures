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
    ll n, x; cin >> n >> x;
    vector<int> price(n + 1), pages(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> price[i];
    }
    for(int i = 1; i <= n; i++) {
        cin >> pages[i];
    }
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for(ll i = 1; i <= n; i++) {
        for(ll j = 1; j <= x; j++) {
            int notTake = dp[i - 1][j];
            int take = -1;
            if(price[i] <= j) {
                take = dp[i - 1][j - price[i]] + pages[i];
            }
            dp[i][j] = max(take, notTake);
        }
    }
    cout << dp[n][x] << endl;
}

int main() {
    IOS;
    sol();
    return 0;
}