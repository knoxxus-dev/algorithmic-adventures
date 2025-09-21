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
    int n;cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    ll x=2;
    bool flag=1;
    while(flag){
        ll a=arr[0]%x;
        for(int i=1;i<n;i++){
            if(arr[i]%x!=a){
                flag=0;
                break;
            }
        }
        if(flag==0)break;
        x=x<<1;
    }
    cout<<x<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}