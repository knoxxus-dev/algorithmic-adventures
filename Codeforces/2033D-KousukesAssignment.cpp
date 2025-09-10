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

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    vector<ll>ps(n+1);
    for(int i=0;i<n;i++){
        ps[i+1]=ps[i]+arr[i];
    }
    map<ll,ll>ind;
    vector<pair<ll,ll>>intervals;
    for(int i=0;i<=n;i++){
        if(ind.find(ps[i])!=ind.end()){
            intervals.pb({i,ind[ps[i]]+1});
            ind[ps[i]]=i;
        }else{
            ind[ps[i]]=i;
        }
    }
    sort(intervals.begin(),intervals.end());
    ll curInd=-1;
    ll ans=0;
    for(int i=0;i<intervals.size();i++){
        if(intervals[i].second>curInd){
            curInd=intervals[i].first;
            ans++;
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}