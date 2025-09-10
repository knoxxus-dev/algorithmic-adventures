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
    string s;cin>>s;
    vector<ll>pre(n+1);
    for(int i=1;i<=n;i++){
        pre[i]=pre[i-1]+arr[i-1];
    }
    int l=0,r=n-1;
    ll ans=0;
    while(true){
        while(l<n&&s[l]!='L'){
            l++;
        }
        while(r>=0&&s[r]!='R'){
            r--;
        }
        if(l>=r){
            break;
        }else{
            ans+=pre[r+1]-pre[l];
        }
        l++;r--;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}