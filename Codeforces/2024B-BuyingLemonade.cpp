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

using namespace std;

void sol(ll n, ll k){
    vector<ll> v(n);
    ll ans = k;
    ll sum = 0;
    ll prev = 0;
    for(ll i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        sum += (v[i]-prev)*(n-i);
        prev = v[i];
        if(sum<k) ans++;
        else break;
    }
    cout << ans << '\n';
}

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        sol(n, k);
    }
}