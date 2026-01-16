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
    ll n; cin >> n;
    vector<ll> arr(n);
    for(ll &it: arr) {
        cin >> it;
    }
    sort(all(arr));
    ll currentSum = 0;
    for(ll it: arr) {
        if(it <= currentSum + 1) {
            currentSum += it;
        } else {
            cout << currentSum + 1;
            return;
        }
    }
    cout << currentSum + 1;
}

int main() {
    IOS;
    sol();
    return 0;
}