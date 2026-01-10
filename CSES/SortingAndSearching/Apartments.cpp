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
    ll n, m, k; cin >> n >> m >> k;
    vector<ll> applicants(n), apartments(m);
    ll ans = 0;
    for(ll &it: applicants) {
        cin >> it;
    }
    for(ll &it: apartments) {
        cin >> it;
    }
    sort(all(applicants));
    sort(all(apartments));
    ll it1 = 0, it2 = 0;
    while(it1 < n && it2 < m) {
        if(apartments[it2] - k <= applicants[it1] && applicants[it1] <= apartments[it2] + k) {
            ans++;
            it1++;
            it2++;
        } else if(applicants[it1] < apartments[it2] - k) {
            it1++;
        } else if(applicants[it1] > apartments[it2] + k) {
            it2++;
        } 
    }
    cout << ans << endl;
}

int main() {
    IOS;
    sol();
    return 0;
}