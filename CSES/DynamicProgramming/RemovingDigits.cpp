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
    int n; cin >> n;
    vector<int> dp(n + 1, INF);
    vector<int> availableDigits;
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        availableDigits.clear();
        int current = i;
        while(current > 0) {
            availableDigits.push_back(current % 10);
            current /= 10;
        }
        for(int digit: availableDigits) {
            dp[i] = min(dp[i], dp[i - digit] + 1);
        }
    }
    cout << dp[n];
}

int main() {
    IOS;
    sol();
    return 0;
}