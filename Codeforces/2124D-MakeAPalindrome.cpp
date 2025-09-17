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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &it: a) {
        cin >> it;
    }
    if(k == 1) {
        cout << "YES" << endl;
        return;
    }
    vector<int> b = a;
    sort(all(b));
    int x = b[k - 2];
    b.clear();
    for(int i = 0; i < n; i++) {
        if(a[i] <= x) {
            b.pb(a[i]);
        }
    }
    int it1 = 0, it2 = b.size() - 1;
    int removed = 0;
    while(it1 < it2) {
        if(b[it1] == b[it2]) {
            it1++; it2--;
        } else {
            if(b[it1] == x) {
                it1++;
                removed++;
            } else if(b[it2] == x) {
                it2--;
                removed++;
            } else {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(b.size() - removed < k - 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}