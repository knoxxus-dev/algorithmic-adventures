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
    string s1, s2; cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    int dp[n + 1][m + 1];
    for(int i = 0; i <= n; i++) {
        dp[i][0] = i;
    }
    for(int i = 0; i <= m; i++) {
        dp[0][i] = i;
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j] + 1, min(dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1));
            }
        }
    }
    cout << dp[n][m];
}

int main() {
    IOS;
    sol();
    return 0;
}