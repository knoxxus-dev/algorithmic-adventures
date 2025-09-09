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
const ll INF=1e12;
const ld EPS=1e-9;

using namespace std;

void sol(){
    ll n;cin>>n;
    vector<ll>arr(2*n);
    ll ans=0,sum=0;
    for(int i=0;i<2*n;i++){
        cin>>arr[i];
        ans+=abs(arr[i]);
        sum+=abs(arr[i]+1);
    }
    if(n==1){
        cout<<abs(arr[0]-arr[1])<<endl;
        return;
    }
    if(n==2){
        ll tempAns=0;
        for(int i=0;i<2*n;i++){
            tempAns+=abs(arr[i]-2);
        }
        ans=min(ans,tempAns);
    }
    if(n%2==0){
        for(int i=0;i<2*n;i++){
            ans=min(ans,sum-abs(arr[i]+1)+abs(arr[i]-n));
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}