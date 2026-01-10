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
    multiset<ll> tickets;
    for(ll i = 0; i < n; i++) {
        ll it; cin >> it;
        tickets.insert(it);
    }
    for(ll i = 0; i < m; i++) {
        ll customer; cin >> customer;
        multiset<ll>::iterator upperBound = tickets.upper_bound(customer);
        if(upperBound == tickets.begin()) {
            cout << -1 << endl;
        } else {
            upperBound--;
            cout << *upperBound << endl;
            tickets.erase(upperBound);
        }
    }
}

int main() {
    IOS;
    sol();
    return 0;
}