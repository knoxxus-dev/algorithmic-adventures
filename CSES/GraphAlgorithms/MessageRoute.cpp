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
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adjList(n + 1);
    vector<bool> visited(n + 1, false);
    vector<ll> parent(n + 1, -1);

    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    queue<ll> q;
    q.push(1);
    visited[1] = true;

    while(!q.empty()) {
        ll node = q.front();
        q.pop();
        for(ll neighbor: adjList[node]) {
            if(!visited[neighbor]) {
                q.push(neighbor);
                parent[neighbor] = node;
                visited[neighbor] = true;
            }
        }
    }

    if(parent[n] == -1) {
        cout << "IMPOSSIBLE" << endl;
    } else {
        vector<ll> path;
        ll current = n;
        while(current != 1) {
            path.push_back(current);
            current = parent[current];
        }
        path.push_back(1);

        cout << path.size() << endl;
        for(ll i = path.size() - 1; i >= 0; i--) {
            cout << path[i] << " ";
        }
    }
}

int main() {
    IOS;
    sol();
    return 0;
}