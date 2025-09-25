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
    int n,k,s1,s2;cin>>n>>k>>s1>>s2;
    vector<int>p(n);
    vector<int>a(n);
    for(auto &it:p){
        cin>>it;it--;
    }
    for(auto &it:a)cin>>it;
    auto getSum=[&](int k,int s){
        vector<bool>visited(n);
        ll current=0;ll mx=0;
        while(!visited[s]&&k>0){
            visited[s]=true;
            mx=max(mx,current+(ll)k*a[s]);
            current+=a[s];
            k--;
            s=p[s];
        }
        return mx;
    };
    ll sum1=getSum(k,--s1);
    ll sum2=getSum(k,--s2);
    if(sum1>sum2)cout<<"Bodya"<<endl;
    else if(sum1<sum2)cout<<"Sasha"<<endl;
    else cout<<"Draw"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}