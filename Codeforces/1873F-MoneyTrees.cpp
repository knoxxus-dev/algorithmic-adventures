#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    int n,k;cin>>n>>k;
    vector<int>apples(n);
    vector<int>heights(n);
    vector<int>prefix(n+1);
    for(int i=0;i<n;i++){
        int it;cin>>it;
        apples[i]=it;
        prefix[i+1]=prefix[i]+it;
    }
    for(auto &it:heights)cin>>it;
    vector<int>len(n);
    len[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(heights[i]%heights[i+1]==0){
            len[i]=len[i+1]+1;
        }else{
            len[i]=1;
        }
    }
    auto get=[&](int dist){
        bool found=false;
        for(int i=0;i<n-dist+1;i++){
            if(len[i]<dist)continue;
            if(prefix[i+dist]-prefix[i]<=k){
                found=true;
                break;
            }
        }
        return found;
    };
    int l=1,r=n;
    while(l<=r){
        int mid=(l+r)/2;
        if(get(mid)){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<r<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}