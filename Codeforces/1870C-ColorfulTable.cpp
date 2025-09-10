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
    int n,k;cin>>n>>k;
    vector<int>a(n);
    set<int>s;
    for(auto &it:a){
        cin>>it;
        s.insert(it);
    }
    vector<int>l(k+1,n+1),r(k+1,-1),sl,sr;
    for(int i=0;i<n;i++){
        l[a[i]]=min(l[a[i]],i);
        r[a[i]]=i;
    }
    sl=l;
    sr=r;
    for(int i=k-1;i>=1;i--){
        sl[i]=min(sl[i],sl[i+1]);
        sr[i]=max(sr[i],sr[i+1]);
    }
    for(int i=1;i<=k;i++){
        if(!s.count(i)){
            cout<<0<<" ";
        }else{
            cout<<2*(sr[i]-sl[i]+1)<<" ";
        }
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}