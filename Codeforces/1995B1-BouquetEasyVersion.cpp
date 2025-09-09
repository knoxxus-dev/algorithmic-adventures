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

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    ll n,m;cin>>n>>m;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    ll ans=0;
    ll count=0,cost=0;
    sort(all(arr));
    int it1=0,it2=0;
    while(it2<n){
        count+=arr[it2];
        cost+=arr[it2];
        while(it1<=it2&&(cost>m||(arr[it2]-arr[it1]>1))){
            count-=arr[it1];
            cost-=arr[it1];
            it1++;
        }
        if(cost<=m)ans=max(ans,cost);
        it2++;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}