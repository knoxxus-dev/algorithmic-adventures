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
    vector<ll> p(n);
    for(auto &it: p) {
        cin >> it;
    }
    vector<ll> dp(n);
    dp[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--) {
        if(p[i] > p[i + 1]) {
            dp[i] = n - i + dp[i + 1];
        } else {
            if(i + 2 < n) {
                dp[i] = n - i + dp[i + 2];
            } else {
                dp[i] = 2;
            }
            
        }
    }
    ll ans = 0;
    for(auto it: dp) {
        ans += it;
    }
    cout << ans << endl;
}

int main() {
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}