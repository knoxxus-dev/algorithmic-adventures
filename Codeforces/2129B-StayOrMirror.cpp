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
    for(auto &it: arr) {
        cin >> it;
    }
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll lbig = 0, rbig = 0;
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[i]) {
                lbig++;
            }
        }
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                rbig++;
            }
        }
        ans += min(lbig, rbig);
    }
    cout << ans << endl;
}

int main() {
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}