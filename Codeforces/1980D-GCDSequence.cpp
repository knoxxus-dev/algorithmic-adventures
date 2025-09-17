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

bool isIncreasing(vector<int>&a){
    vector<int>g(a.size()-1);
    for(int i=0;i<a.size()-1;i++){
        g[i]=gcd(a[i],a[i+1]);
    }
    for(int i=1;i<g.size();i++){
        if(g[i]<g[i-1])return false;
    }
    return true;
}

void sol(){
    int n;cin>>n;
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    vector<int>g(a.size()-1);
    for(int i=0;i<a.size()-1;i++){
        g[i]=gcd(a[i],a[i+1]);
    }
    int it=-1;
    for(int i=1;i<g.size();i++){
        if(g[i]<g[i-1]){
            it=i;
            break;
        }
    }
    if(it==-1){
        cout<<"YES"<<endl;
        return;
    }
    vector<int>b0=a,b1=a,b2=a;
    b0.erase(b0.begin()+it-1);
    b1.erase(b1.begin()+it);
    if(it<n-1)b2.erase(b2.begin()+it+1);
    if(isIncreasing(b0)||isIncreasing(b1)||isIncreasing(b2)){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}