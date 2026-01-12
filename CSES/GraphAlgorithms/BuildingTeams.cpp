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

void dfs(vector<vector<ll>> &adjList, vector<ll> &team, ll node, bool &flag) {
    for(ll neighbor: adjList[node]) {
        if(team[neighbor] == team[node]) {
            flag = false;
        } else if(team[neighbor] == 0) {
            team[neighbor] = 3 - team[node];
            dfs(adjList, team, neighbor, flag);
        }
    }
}

void sol() {
    ll n, m; cin >> n >> m;
    vector<vector<ll>> adjList(n + 1);
    for(ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b;
        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    vector<ll> team(n + 1, 0);
    bool flag = true;
    for(ll i = 1; i <= n; i++) {
        if(team[i] == 0) {
            team[i] = 1;
            dfs(adjList, team, i, flag);
        }
    }

    if(flag) {
        for(ll i = 1; i <= n; i++) {
            cout << team[i] << " ";
        }
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
}

int main() {
    IOS;
    sol();
    return 0;
}