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
vector<ll> subtreeSize(MAX_N, 0);

void findSubtreeSize(ll prev, ll cur) {
    for(ll neighbor: adjList[cur]) {
        if(neighbor != prev) {
            findSubtreeSize(cur, neighbor);
            subtreeSize[cur] += subtreeSize[neighbor];
        }
    }
    subtreeSize[cur]++;
}

void sol() {
    ll n; cin >> n;
    for(ll i = 2; i <= n; i++) {
        ll x; cin >> x;
        adjList[i].push_back(x);
        adjList[x].push_back(i);
    }

    findSubtreeSize(0, 1);
    for(ll i = 1; i <= n; i++) {
        cout << subtreeSize[i] - 1 << " ";
    }
}

int main() {
    IOS;
    sol();
    return 0;
}