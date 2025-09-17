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
    set<int>dist;
    for(auto &it:a)cin>>it;
    if(a.size()==1){
        cout<<1<<endl;
        return;
    }
    sort(all(a));
    for(auto elem:a){
        dist.insert(elem);
    }
    vector<int>d;
    for(int i=0;i<n-1;i++){
        d.push_back(a[i+1]-a[i]);
    }
    int g=d[0];
    for(auto elem:d){
        g=gcd(g,elem);
    }
    ll sum=0;
    for(auto elem:a){
        sum+=(ll)(((ll)a[n-1]-elem)/(ll)g);
    }
    int it=1;
    while(dist.find(a[n-1]-it*g)!=dist.end()){
        it++;
        sum++;
    }
    cout<<sum+1<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}