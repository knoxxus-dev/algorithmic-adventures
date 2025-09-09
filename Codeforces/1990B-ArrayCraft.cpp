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
    int n,x,y;cin>>n>>x>>y;
    vector<int>xarr(n),yarr(n);
    for(int i=0;i<n;i++){
        if(i<x){
            xarr[i]=1;
        }else{
            xarr[i]=-1;
        }
    }
    for(int i=0;i<n;i++){
        if(i>=y-1){
            yarr[i]=1;
        }else{
            yarr[i]=-1;
        }
    }
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(xarr[i]==1&&yarr[i]==1){
            ans.push_back(1);
        }else{
            ans.push_back(-1);
        }
    }
    int it=y-3;
    while(it>=0){
        ans[it]=1;
        it-=2;
    }
    it=x+1;
    while(it<n){
        ans[it]=1;
        it+=2;
    }
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}