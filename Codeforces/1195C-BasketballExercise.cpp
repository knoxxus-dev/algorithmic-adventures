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
    ll n;cin>>n;
    vector<ll>dp1(n),dp2(n),arr1(n),arr2(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    dp1[0]=arr1[0];
    dp2[0]=arr2[0];
    for(int i=1;i<n;i++){
        dp1[i]=max(dp1[i-1],dp2[i-1]+arr1[i]);
        dp2[i]=max(dp2[i-1],dp1[i-1]+arr2[i]);
    }
    cout<<max(dp1[n-1],dp2[n-1]);
}

int main(){
    IOS;
    sol();
    return 0;
}