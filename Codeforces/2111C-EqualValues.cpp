#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pii pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define uii unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    vector<int> fib(11);
    fib[1] = 1;
    fib[2] = 2;
    for(int i = 3; i <= 10; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int dp[151][151][151] = {0};
    dp[1][1][1] = 1;
    for(int i = 1; i <= 150; i++) {
        for(int j = 1; j <= 150; j++) {
            for(int k = 1; k <= 150; i++) {
                for(int x = 1; x <= 10; x++) {
                    if(i - x >= 1 && j - x >=1 && k - x >= 1) {
                        if(dp[i - x][j - x][k - x] == x - 1) {
                            dp[i][j][k] = x;
                        } else {
                            dp[i - x][j - x][k - x] = max(dp[i][j][k], dp[i - x][j - x][k - x]); 
                        }
                    }
                }
            }
        }
    }
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        string ans = "";
        for(int i = 0; i < m; i++) {
            int a, b, c; cin >> a >> b >> c;
            if(dp[a][b][c] >= n) {
                ans.pb('1');
            } else {
                ans.pb('0');  
            }
        }
        cout << ans << endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}