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
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    ll maxi=arr[0];
    ll current=0;
    f(i,n){
        current=max(current,(ll)0);
        current+=arr[i];
        maxi=max(maxi,current);
    }
    ll sum=0;
    f(i,n){
        sum+=arr[i];
        sum%=MOD;
        if(sum<0)sum+=MOD;
    }
    if(maxi<=0){
        cout<<sum<<endl;
        return;
    }else{
        while(k--){
            sum+=maxi;
            sum%=MOD;
            maxi+=maxi;
            maxi%=MOD;
        }
        cout<<sum<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}