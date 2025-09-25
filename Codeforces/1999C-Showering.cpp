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
    ll n,s,m;cin>>n>>s>>m;
    vector<pair<ll,ll>>mins;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        mins.push_back({a,b});
    }
    sort(all(mins));
    ll mxtime=-1;
    ll first=mins[0].first-0;
    ll last=m-mins[n-1].second;
    for(int i=0;i<n-1;i++){
        ll r=mins[i].second;
        ll l=mins[i+1].first;
        ll time=l-r;
        mxtime=max(mxtime,time);
    }
    mxtime=max(mxtime,first);
    mxtime=max(mxtime,last);
    if(mxtime>=s){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}