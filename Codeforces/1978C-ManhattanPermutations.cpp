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

void swap(vector<ll>&ans,ll l,ll r){
    ans[l]^=ans[r];
    ans[r]^=ans[l];
    ans[l]^=ans[r];
}

void sol(){
    ll n,k;cin>>n>>k;
    vector<ll>ans(n);
    for(ll i=0;i<n;i++){
        ans[i]=i+1;
    }
    ll mx=0;
    ll temp=n;
    for(ll i=1;i<=n;i++){
        mx+=((ll)abs((ll)i-temp));
        temp--;
    }
    if(k%2!=0||k>mx){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
        ll maxi=(n-1)*2;
        ll r=n-1;
        for(ll i=0;i<n;i++){
            if(k==0)break;
            if(k>maxi){
                swap(ans,i,r);
                r--;
                k-=(ll)maxi;
                maxi-=4;
            }else{
                swap(ans,i,i+k/2);
                break;
            }
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}