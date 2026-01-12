#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
 
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
 
const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;
 
using namespace std;
 
void sol() {
    int n, m; cin >> n >> m;
    int startr, startc, endr, endc;
    vector<vector<char>> grid(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 'A') {
                startr = i;
                startc = j;
            }
            if(grid[i][j] == 'B') {
                endr = i;
                endc = j;
            }
        }
    }
    vector<int> distances(n * m, INT_MAX), visited(n * m);
    vector<pair<int, int>> parents(n * m, {-1, -1});
    queue<pair<int, int>> q;
    q.push({startr, startc});
    visited[startr * m + startc] = 1;
    int distance = 0;
    while(!q.empty()) {
        int x = q.size();
        for(int i = 0; i < x; i++){
            auto cur = q.front(); q.pop();
            distances[cur.first * m + cur.second] = distance;
            for(int j = 0; j < 4; j++) {
                int nextr = cur.first + dx[j];
                int nextc = cur.second + dy[j];
                if(nextr >= 0 && nextc >= 0 && nextr <n && nextc < m && grid[nextr][nextc] != '#' && visited[nextr * m + nextc] == 0) {
                    q.push({nextr, nextc});
                    parents[nextr * m + nextc] = {cur.first, cur.second};
                    visited[nextr * m + nextc] = 1;
                }
            }
        }
        distance++;
    }
    string ans;
    if(distances[endr * m + endc] == INT_MAX){
        cout << "NO" << endl;
        return;
    }else{
        cout << "YES" << endl;
    }
    int curr = endr, curc = endc;
    while(curr != startr || curc != startc) {
        auto parent = parents[curr * m + curc];
        if(parent.first == curr-1 && parent.second == curc) {
            ans.append(1, 'D');
        } else if(parent.first == curr && parent.second == curc-1) {
            ans.append(1, 'R');
        } else if(parent.first == curr && parent.second == curc+1) {
            ans.append(1, 'L');
        } else if(parent.first == curr+1 && parent.second == curc) {
            ans.append(1, 'U');
        }
        curr = parent.first;
        curc = parent.second;
    }
    cout << ans.size() << endl;
    reverse(all(ans));
    cout << ans << endl;
}
 
int main() {
    IOS;
    sol();
    return 0;
}