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
vector<bool> done(MAX_N, false);
ll ans = 0;

void dfs(ll prev, ll cur) {
    for(ll neighbor: adjList[cur]) {
        if(neighbor != prev) {
            dfs(cur, neighbor);
            if(!done[neighbor] && !done[cur]) {
                ans++;
                done[neighbor] = true;
                done[cur] = true;
            }
        }
    }
}

void sol() {
    ll n; cin >> n;
    for(ll i = 0; i < n - 1; i++) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    dfs(0, 1);
    cout << ans << endl;
}

int main() {
    IOS;
    sol();
    return 0;
}