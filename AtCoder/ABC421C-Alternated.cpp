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
    ll N; string S;
    cin >> N >> S;
    ll ans1 = 0, ans2 = 0;
    ll count1 = 1, count2 = 2;
    for(int i = 1; i <= 2 * N; i++) {
        if(S[i - 1] == 'A') {
            ans1 += abs(i - count1);
            ans2 += abs(i - count2);
            count1 += 2;
            count2 += 2;
        }
    }
    cout << min(ans1, ans2);
}

int main() {
    IOS;
    sol();
    return 0;
}