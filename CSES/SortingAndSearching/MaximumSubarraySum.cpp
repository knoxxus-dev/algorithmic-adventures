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
    vector<ll> arr(n);
    for(ll &it: arr) {
        cin >> it;
    }
    ll counter = 0;
    ll mx = 0;
    for(ll it: arr) {
        if(counter + it <= 0) {
            counter = 0;
        } else {
            counter += it;
            mx = max(counter, mx);
        }
    }
    if(mx == 0) {
        ll mn = INT_MAX;
        for(ll it: arr) {
            mn = min(abs(it), mn);
        }
        cout << -mn;
    } else {
        cout << mx;
    }
}

int main() {
    IOS;
    sol();
    return 0;
}