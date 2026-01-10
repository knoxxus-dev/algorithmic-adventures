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
    vector<ll> entry, exit;
    ll count = 0;
    ll maxCount = 1;
    for(ll i = 0; i < n; i++) {
        ll a, b; cin >> a >> b;
        entry.push_back(a);
        exit.push_back(b);
    }   
    sort(all(entry));
    sort(all(exit));
    ll it1 = 0, it2 = 0;
    while(it1 < n && it2 < n) {
        if(entry[it1] < exit[it2]) {
            count++;
            it1++;
            maxCount = max(count, maxCount);
        } else {
            count--;
            it2++;
        }
    }
    cout << maxCount << endl;
}

int main() {
    IOS;
    sol();
    return 0;
}