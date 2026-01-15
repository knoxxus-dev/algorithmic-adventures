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
    ll r, c; cin >> r >> c;
    ll mx = max(r, c);
    ll square = (mx - 1) * (mx - 1);
    if(mx % 2 == 0) {
        if(c > r) {
            cout << square + r << endl;
        } else {
            cout << mx * mx - c + 1 << endl;
        }
    } else {
        if(c > r) {
            cout << mx * mx - r + 1 << endl;
        } else {
            cout << square + c << endl;
        }
    }
}

int main() {
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}