#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=2e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

vector<ll> segTree(4 * MAX_N, 0);

void build(vector<ll> &arr, ll node, ll tl, ll tr) {
    if(tl == tr) {
        segTree[node] = arr[tl];
    } else {
        ll tm = (tl + tr) / 2;
        build(arr, 2 * node, tl, tm);
        build(arr, 2 * node + 1, tm + 1, tr);
        segTree[node] = min(segTree[2 * node], segTree[2 * node + 1]);
    }
}

ll minQuery(ll node, ll tl, ll tr, ll l, ll r) {
    if(l > r) {
        return INT_MAX;
    }
    if(l == tl && r == tr) {
        return segTree[node];
    }
    ll tm = (tl + tr)/2;
    return min(minQuery(2 * node, tl, tm, l, min(r, tm)), minQuery(2 * node + 1, tm + 1, tr, max(l, tm + 1), r));
}

void sol() {
    ll n, q; cin >> n >> q;
    vector<ll> arr(n);
    for(ll &it: arr) {
        cin >> it;
    }

    build(arr, 1, 0, n - 1);
    while(q--) {
        ll a, b; cin >> a >> b;
        cout << minQuery(1, 0, n - 1, --a, --b) << endl;
    }
}

int main() {
    IOS;
    sol();
    return 0;
}