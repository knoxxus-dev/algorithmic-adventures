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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void sol(){
    ll n; cin >> n;
    vector<ll> arr(n);
    for(auto &it: arr) {
        cin >> it;
    }
    ll min_gcd = arr[0];
    for(ll i = 1; i < n; i++) {
        min_gcd = gcd(min_gcd, arr[i]);
    }
    sort(all(arr));
    if(arr[0] == min_gcd) {
        ll count = 0;
        for(auto &it: arr) {
            if(it == min_gcd) {
                count++;
            }
        }
        cout << n - count << endl;
        return;
    }
    ll count = 0;
    while(true) {
        ll temp_gcd = LLONG_MAX;
        ll toswap;
        for(ll i = 1; i < n; i++) {
            for(ll j = 0; j < i; j++) {
                if(gcd(arr[i], arr[j]) < temp_gcd) {
                    temp_gcd = gcd(arr[i], arr[j]);
                    toswap = j;
                }
            }
        }
        arr[toswap] = temp_gcd;
        sort(all(arr));
        count++;
        if(arr[0] == min_gcd) {
            break;
        }
    }
    cout << count + n - 1 << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}