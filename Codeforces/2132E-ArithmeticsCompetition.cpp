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
    ll n, m, q; cin >> n >> m >> q;
    vector<ll> a(n), prefix_a(n + 1);
    vector<ll> b(m), prefix_b(m + 1);
    for(auto &it: a) {
        cin >> it;
    }
    for(auto &it: b) {
        cin >> it;
    }
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < n; i++) {
        prefix_a[i + 1] = prefix_a[i] + a[i];
    }
    for(int i = 0; i < m; i++) {
        prefix_b[i + 1] = prefix_b[i] + b[i];
    }
    while(q--) {
        ll x, y, z;
        cin >> x >> y >> z;
        ll l = max(0LL, z - y);
        ll r = min(x, z);
        while(r - l > 2) {
            ll m1 = (l + l + r) / 3;
            ll m2 = (l + r + r) / 3;
            if(prefix_a[m1] + prefix_b[z - m1] < prefix_a[m2] + prefix_b[z - m2]) {
                l = m1;
            } else {
                r = m2;
            }
        }
        ll mx = 0;
        for(int i = l; i <= r; i++) {
            mx = max(mx, prefix_a[i] + prefix_b[z - i]);
        }
        cout << mx << endl;
    }
}

int main() {
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}