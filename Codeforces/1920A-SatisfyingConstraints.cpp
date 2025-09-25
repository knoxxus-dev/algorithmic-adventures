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
    ll n;cin>>n;
    vector<ll>uneq;
    ll min1=LLONG_MAX;
    ll max1=LLONG_MIN;
    for(int i=0;i<n;i++){
        int it;cin>>it;
        if(it==1){
            ll greater;cin>>greater;
            max1=max(greater,max1);
        }else if(it==2){
            ll lesser;cin>>lesser;
            min1=min(lesser,min1);
        }else if(it==3){
            ll noteq;cin>>noteq;
            uneq.push_back(noteq);
        }
    }
    ll ans=min1-max1+1;
    if(ans<0){
        cout<<0<<endl;
        return;
    }
    for(auto it:uneq){
        if(it<=min1 && it>=max1)ans--;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}