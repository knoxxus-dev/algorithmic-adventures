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

void dfs(vector<vector<ll>> &adjList, vector<bool> &visited, ll node) {
    visited[node] = true;
    for(ll neighbor: adjList[node]) {
        if(!visited[neighbor]) {
            dfs(adjList, visited, neighbor);
        }
    }
}

void sol() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adjList(n + 1);
    vector<bool> visited(n + 1, false);
    vector<ll> groups;

    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(ll i = 1; i <= n; i++) {
        if(!visited[i]) {
            groups.push_back(i);
            dfs(adjList, visited, i);
        }
    }

    cout << groups.size() - 1 << endl;
    for(ll i = 0; i < groups.size() - 1; i++) {
        cout << groups[i] << " " << groups[i + 1] << endl;
    }
}

int main() {
    IOS;
    sol();
    return 0;
}