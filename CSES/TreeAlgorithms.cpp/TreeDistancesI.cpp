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
vector<ll> maxLengthDown1(MAX_N, 0);
vector<ll> maxLengthDown2(MAX_N, 0);
vector<ll> maxLengthUp(MAX_N, 0);

void dfs1(ll prev, ll cur) {
    for(ll neighbor: adjList[cur]) {
        if(prev != neighbor) {
            dfs1(cur, neighbor);
            if(maxLengthDown1[neighbor] + 1 >= maxLengthDown1[cur]) {
                maxLengthDown2[cur] = maxLengthDown1[cur];
                maxLengthDown1[cur] = maxLengthDown1[neighbor] + 1;
            } else if(maxLengthDown1[neighbor] + 1 >= maxLengthDown2[cur]) {
                maxLengthDown2[cur] = maxLengthDown1[neighbor] + 1;
            }
        }
    }
}

void dfs2(ll prev, ll cur) {
    for (ll neighbor : adjList[cur]) {
        if (neighbor == prev) continue;

        ll use;
        if (maxLengthDown1[cur] == maxLengthDown1[neighbor] + 1)
            use = maxLengthDown2[cur];
        else
            use = maxLengthDown1[cur];

        maxLengthUp[neighbor] = max(maxLengthUp[cur], use) + 1;
        dfs2(cur, neighbor);
    }
}

void sol() {
    ll n; cin >> n;
    for(ll i = 0; i < n - 1; i++) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    dfs1(0, 1);
    maxLengthUp[1] = 0;
    dfs2(0, 1);
    for(ll i = 1; i <= n; i++) {
        cout << max(maxLengthDown1[i], maxLengthUp[i]) << " ";
    }
}

int main() {
    IOS;
    sol();
    return 0;
}