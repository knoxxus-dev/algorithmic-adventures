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
    int n,m;cin>>n>>m;
    vector<ll>arr1(n);
    vector<ll>arr2(n);
    for(auto &it:arr1)cin>>it;
    for(auto &it:arr2)cin>>it;
    ll counter=0;
    ll res=0;
    for(int i=n-1;i>=m;i--){
        if(arr1[i]<arr2[i]){
            res+=counter;
            res+=arr1[i];
            counter=0;
        }else{
            counter+=arr2[i];
        }
    }
    ll mini=LONG_LONG_MAX;
    for(int i=m-1;i>=0;i--){
        mini=min(mini,res+counter+arr1[i]);
        counter+=arr2[i];
    }
    cout<<mini<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}