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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    int n,m;cin>>n>>m;
    int arr[n+2][m+2];
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            if(i==0||j==0||i==n+1||j==m+1){
                arr[i][j]=0;
                continue;
            }
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            if(i==0||j==0||i==n+1||j==m+1){
                continue;
            }
            int a=arr[i-1][j];
            int b=arr[i+1][j];
            int c=arr[i][j+1];
            int d=arr[i][j-1];
            int mx=max(a,b);
            mx=max(c,mx);
            mx=max(d,mx);
            if(arr[i][j]>mx){
                arr[i][j]=mx;
            }
        }
    }
    for(int i=0;i<n+2;i++){
        for(int j=0;j<m+2;j++){
            if(i==0||j==0||i==n+1||j==m+1){
                arr[i][j]=0;
                continue;
            }
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}