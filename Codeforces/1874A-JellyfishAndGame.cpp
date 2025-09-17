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
    int n,m,k;cin>>n>>m>>k;
    vector<int>a(n),b(m);
    ll suma=0;
    for(auto &it:a){
        cin>>it;
        suma+=(ll)it;
    }
    for(auto &it:b)cin>>it;
    int maxa=*max_element(a.begin(),a.end());
    int mina=*min_element(a.begin(),a.end());
    int maxb=*max_element(b.begin(),b.end());
    int minb=*min_element(b.begin(),b.end());
    int total_max=max(maxa,maxb);
    int total_min=min(mina,minb);
    if(mina<maxb){
        suma+=(ll)maxb;
        suma-=(ll)mina;
    }
    if(!(k&1)){
        suma-=(ll)total_max;
        suma+=(ll)total_min;
    }
    cout<<suma<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}