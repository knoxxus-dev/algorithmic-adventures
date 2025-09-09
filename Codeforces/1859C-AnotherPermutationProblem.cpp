#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long

using namespace std;

void sol(){
    ll n;cin>>n;
    auto value=[](ll x,ll n){
        ll maxi=-1;
        ll sum=0;
        for(ll i=1;i<=x;i++){
            sum+=i*i;
            maxi=max(i*i,maxi);
        }
        ll it=0;
        for(ll i=x+1;i<=n;i++){
            maxi=max(i*(n-it),maxi);
            sum+=i*(n-it++);
        }
        return sum-maxi;
    };
    ll maxi=LLONG_MIN;
    for(ll i=0;i<=n;i++){
        maxi=max(maxi,value(i,n));
    }
    cout<<maxi<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}