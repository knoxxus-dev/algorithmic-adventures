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
    int n;cin>>n;
    vector<pair<pair<int,int>,int>>a(n);
    for(int i=0;i<n;i++){
        int l,r;cin>>l>>r;
        a[i].first.first=l;
        a[i].first.second=r;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    int it;bool f=0;
    int mx=a[0].first.second;
    for(int i=1;i<n;i++){
        if(a[i].first.first>mx){
            f=1;
            it=i;
            break;
        }
        mx=max(mx,a[i].first.second);
    }
    if(f){
        int x=1;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(i==it)x=2;
            ans[a[i].second]=x;
        }
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }else{
        cout<<-1<<" ";
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}