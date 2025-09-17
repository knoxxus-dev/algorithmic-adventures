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
    int n,m,k;cin>>n>>m>>k;
    vector<int>ans(n);
    int c1=n;
    int c2=1;
    int a=n-k;
    int x=n-m;
    for(int i=0;i<=a;i++){
        ans[i]=c1--;
    }
    if(x<=a){
        for(int i=a+1;i<n;i++){
            ans[i]=c2++;
        }
    }else{
        for(int i=x;i<n;i++){
            ans[i]=c2++;
        }
        for(int i=a+1;i<x;i++){
            ans[i]=c2++;
        }
    }
    for(auto &it:ans)cout<<it<<" ";
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}