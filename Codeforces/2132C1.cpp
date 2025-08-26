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

ll pow(ll base, ll pow) {
    ll res = 1;
    while(pow > 0) {
        if(pow & 1) {
            res = res * base;
        }
        base = base * base;
        pow >>= 1;
    }
    return res;
}

void sol(){
    ll n; cin >> n;
    map<ll, ll> count;
    while(n > 0) {
        for(int i = 0; ;i++) {
            ll deal_value = pow(3, i);
            if(deal_value > n) {
                i--;
                count[n / deal_value]++;
                n %= deal_value;
                break;
            }
        }
    }
    ll ans = 0;
    for(auto &it: count) {
        ans += it.second * (pow(3, it.first + 1), it.first * pow(3, it.first - 1));
    }
    cout << ans << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}