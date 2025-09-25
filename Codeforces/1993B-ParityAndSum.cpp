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
    ll n;cin>>n;
    vector<ll>arr(n);
    for(auto &it:arr)cin>>it;
    sort(all(arr));
    ll heven=-1,hodd=-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2){
            hodd=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2==0){
            heven=i;
            break;
        }
    }
    if(hodd==-1||heven==-1){
        cout<<0<<endl;
        return;
    }
    ll currodd=arr[hodd];
    ll ans=0;
    for(int i=hodd;i>=0;i--){
        if(arr[i]%2==0){
            ans++;
            currodd+=arr[i];
        }
    }
    ll extra=0;
    for(int i=hodd;i<n;i++){
        if(arr[i]%2==0){
            ans++;
            if(currodd<arr[i]){
                extra++;
            }
            currodd+=arr[i];
        }
    }
    if(extra!=0){
        ans++;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}