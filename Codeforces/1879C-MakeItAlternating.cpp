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
const ll MOD = 998244353;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

ll fact(ll n){
    ll ans=1;
    for(ll i=1;i<=n;i++){
        ans=((ans%MOD)*(i%MOD))%MOD;
    }
    return ans;
}

void sol(){
    string s;cin>>s;
    int count=0;
    char cr=s[0];
    ll ans=1;
    ll other=0;
    ll min=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==cr){
            count++;
        }else{
            other++;
            ans=(ans%MOD*count%MOD)%MOD;
            min+=count-1;
            count=1;
            cr=s[i];
        }
    }
    other++;
    min+=count-1;
    ans=(ans%MOD*count%MOD)%MOD;
    ans=(ans*fact(s.size()-other))%MOD;
    cout<<min<<" "<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}