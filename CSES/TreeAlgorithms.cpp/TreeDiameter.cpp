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

vector<vector<ll>> adjList(MAX_N);
vector<ll> toLeaf(MAX_N, 0);
vector<ll> maxLength(MAX_N, 0);

void calculateToLeaf(ll prev, ll cur) {
    for(ll neighbor: adjList[cur]) {
        if(prev != neighbor) {
            calculateToLeaf(cur, neighbor);
            toLeaf[cur] = max(toLeaf[cur], toLeaf[neighbor] + 1);
        }
    }
}

void calculateMaxLength(ll prev, ll cur) {
    ll best1 = -1, best2 = -1;
    for(ll neighbor: adjList[cur]) {
        if(prev != neighbor) {
            calculateMaxLength(cur, neighbor);
            if(toLeaf[neighbor] >= best1) {
                best2 = best1;
                best1 = toLeaf[neighbor];
            } else if(toLeaf[neighbor] >= best2) {
                best2 = toLeaf[neighbor];
            }
        }
    }
    if (best1 != -1 && best2 != -1) {
        maxLength[cur] = best1 + best2 + 2;
    } else if (best1 != -1) {
        maxLength[cur] = best1 + 1;
    }
}

void sol() {
    ll n; cin >> n;
    ll ans = 0;
    for(ll i = 0; i < n - 1; i++ ) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    calculateToLeaf(0, 1);
    calculateMaxLength(0, 1);
    for(ll i = 1; i <= n; i++) {
        ans = max(maxLength[i], ans);
    }
    cout << ans;
}

int main() {
    IOS;
    sol();
    return 0;
}