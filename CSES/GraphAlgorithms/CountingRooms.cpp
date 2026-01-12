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

void dfs(vector<vector<bool>> &visited, vector<string> &grid, int n, int m, int row, int col) {
    visited[row][col] = true;
    for(int i = 0; i < 4; i++) {
        int newRow = row + dy[i];
        int newCol = col + dx[i];
        if(0 <= newRow && newRow < n && 0 <= newCol && newCol < m) {
            if(!visited[newRow][newCol] && grid[newRow][newCol] == '.') {
                dfs(visited, grid, n, m, newRow, newCol);
            }
        }
    }
}

void sol() {
    int n, m; cin >> n >> m;
    vector<string> grid(n);
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for(string &row: grid) {
        cin >> row;
    }
    int rooms = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(!visited[i][j] && grid[i][j] == '.') {
                rooms++;
                dfs(visited, grid, n, m, i, j);
            }
        }
    }
    cout << rooms;
}

int main() {
    IOS;
    sol();
    return 0;
}