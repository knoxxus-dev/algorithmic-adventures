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
    vector<pair<ll,ll>>arr(n);
    for(auto &it:arr)cin>>it.first;
    for(auto &it:arr)cin>>it.second;
    sort(all(arr));
    ll ans=0;
    for(auto it:arr){
        ll take=min(m/it.first,it.second);
        ans=max(ans,take*it.first);
    }
    ll it1=0,it2=1;
    while(it2<n){
        if(arr[it2].first-arr[it1].first>1){
            it1++;it2++;
            continue;
        }
        ll take1=min(m/arr[it1].first,arr[it1].second);
        ll left=m-take1*arr[it1].first;
        ll take2=min(left/arr[it2].first,arr[it2].second);
        ll total=take1*arr[it1].first+take2*arr[it2].first;
        ll diff=m-total;
        ll left2=arr[it2].second-take2;
        ll canTake=min(take1,left2);
        if(canTake>=diff){
            cout<<m<<endl;
            return;
        }else{
            ans=max(ans,canTake+total);
        }
        it1++;it2++;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}