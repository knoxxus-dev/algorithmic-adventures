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
    int n, x; cin >> n >> x;
    vector<int> dp(x + 1, INT_MAX), coins(n);
    dp[0] = 0;
    for(int &it: coins) {
        cin >> it;
    }
    for(int i = 1; i <= x; i++) {
        for(int coin: coins) {
            if(i - coin >= 0 && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    if(dp[x] != INT_MAX) {
        cout << dp[x] << endl;
    } else {
        cout << "-1" << endl;
    }
}

int main() {
    IOS;
    sol();
    return 0;
}