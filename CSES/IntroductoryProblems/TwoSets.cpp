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

void sol(){
    ll n; cin >> n;
    ll sum = n * (n + 1) / 2;
    if(sum % 2 == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        set<int> s1;
        set<int> s2;
        for(int i = 1; i <= n; i++) {
            s1.insert(i);
        }
        sum = sum / 2;
        for(int i = n; i > 0; i--) {
            if(i <= sum && sum > 0) {
                sum = sum - i;
                s1.erase(i);
                s2.insert(i);
            }
        }
        cout << s1.size() << endl;
        for(int i: s1) {
            cout << i << " ";
        }
        cout << endl;
        cout << s2.size() << endl;
        for(int i: s2) {
            cout << i << " ";
        }
    }
}

int main() {
    IOS;
    sol();
    return 0;
}