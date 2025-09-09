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
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    vector<ll>b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    ll low=0,high=(ll)1e9+5;
    while(high-low>1){
        ll mid=(low+high)/2;
        ll tempk=0;
        for(int i=0;i<n;i++){
            if(a[i]>=mid){
                tempk+=(a[i]-mid)/b[i]+1;
            }
        }
        if(tempk>=k)low=mid;
        else high=mid;
    }
    ll ans=0;
    ll take=0;
    for(int i=0;i<n;i++){
        if(a[i]>=low){
            ll ap=(a[i]-low)/b[i]+1;
            ans+=ap*a[i]-ap*(ap-1)/2*b[i];
            take+=ap;
        }
    }
    ans-=low*(take-k);
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}