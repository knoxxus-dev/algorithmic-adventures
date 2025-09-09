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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    ll n,k;cin>>n>>k;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    sort(all(arr));
    map<ll,ll>count;
    for(auto it:arr){
        count[it%(2*k)]++;
    }
    ll it=arr[n-1]-k+1;
    ll end=-1;
    ll cur=0;
    ll ans=-1;
    while(true){
        ll rem=it%(2*k);
        if(it==end)break;
        cur+=count[rem];
        if(count[rem]!=0&&end==-1){
            end=it+k;
        }
        if(cur==n){
            ans=it;
            break;
        }
        it++;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}