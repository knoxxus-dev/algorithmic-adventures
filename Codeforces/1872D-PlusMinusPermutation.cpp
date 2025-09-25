#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    auto range_sum=[](ll l,ll r){
        return (l+r)*(r-l+1)/2;
    };
    ll n,x,y;cin>>n>>x>>y;
    ll common=lcm(x,y);
    ll a=n/x-n/common;
    ll b=n/y-n/common;
    ll sum=range_sum(n-a+1,n)-range_sum(1,b);
    cout<<sum<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}