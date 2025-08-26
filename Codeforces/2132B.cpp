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

void sol(){
    ll n; cin >> n;
    ll count = 10;
    ll div = 11;
    vector<ll> ans;
    while(div <= n) {
        if(n % div == 0) {
            ans.pb(n/div);
        }
        count = count * 10;
        div = count + 1;
    }
    cout << ans.size() << endl;
    if(ans.size() == 0) {
        return;
    }
    sort(ans.begin(), ans.end());
    for(auto &it: ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}