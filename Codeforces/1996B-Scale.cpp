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
    int arr[n][n];
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int j=0;j<n;j++){
            int it=s[j]-'0';
            arr[i][j]=it;
        }
    }
    int ans[n/k][n/k];
    for(int i=0;i<n/k;i++){
        for(int j=0;j<n/k;j++){
            ans[i][j]=arr[i*k][j*k];
        }
    }
    for(int i=0;i<n/k;i++){
        for(int j=0;j<n/k;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}