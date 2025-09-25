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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    ll n,a,b;cin>>n>>a>>b;
    ll k=b-a+1;
    if(k<=0){
        cout<<n*a<<endl;
        return;
    }
    ll x=min(n,b);
    if(k>x){
        k=x;
    }
    ll sum1=(n-k)*a;
    ll sum2=k*(b+(b-k+1));
    sum2/=2;
    cout<<sum1+sum2<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}