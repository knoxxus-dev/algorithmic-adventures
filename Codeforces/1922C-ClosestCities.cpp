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
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    vector<int>closest(n);
    closest[0]=1;closest[n-1]=n-2;
    for(int i=1;i<n-1;i++){
        if(a[i+1]-a[i]<a[i]-a[i-1]){
            closest[i]=i+1;
        }else{
            closest[i]=i-1;
        }
    }
    vector<ll>ltr(n);
    vector<ll>rtl(n);
    ltr[0]=0;
    for(int i=1;i<n;i++){
        if(closest[i-1]==i){
            ltr[i]=ltr[i-1]+1;
        }else{
            ltr[i]=ltr[i-1]+a[i]-a[i-1];
        }
    }
    rtl[n-1]=0;
    for(int i=n-2;i>=0;i--){
        if(closest[i+1]==i){
            rtl[i]=rtl[i+1]+1;
        }else{
            rtl[i]=rtl[i+1]+a[i+1]-a[i];
        }
    }
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(a<b){
            cout<<ltr[--b]-ltr[--a]<<endl;
        }else{
            cout<<rtl[--b]-rtl[--a]<<endl;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}