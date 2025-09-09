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

bool binfunc(vector<ll>&arr,ll k){
    ll n=arr.size();
    vector<ll>visited(n);
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]<=k&&(visited[i]==0&&visited[i-1]==0)){
            visited[i]=1;
            visited[i-1]=1;
        }
    }
    ll count=0;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            count++;
            if(count>=2)return false;
        }
    }
    return true;
}

void sol(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    ll l=0,r=1e18+5;
    while(r-l>1){
        ll mid=(l+r)/2;
        if(binfunc(arr,mid)){
            r=mid;
        }else{
            l=mid;
        }
    }
    cout<<r<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}