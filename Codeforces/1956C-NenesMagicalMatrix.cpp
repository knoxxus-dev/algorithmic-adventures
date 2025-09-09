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
    vector<vector<ll>>ans;
    vector<vector<ll>>finalmat(n,vector<ll>(n,0));
    int it=0;
    for(int i=n-1;i>=0;i--){
        ans.pb({1,i+1});
        for(int j=1;j<=n;j++){
            finalmat[i][j-1]=j;
        }
        ans.pb({2,i+1});
        for(int j=1;j<=n;j++){
            finalmat[j-1][i]=j;
        }
    }
    ll finalSum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            finalSum+=finalmat[i][j];
        }
    }
    cout<<finalSum<<" "<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        for(auto it:ans[i]){
            cout<<it<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}