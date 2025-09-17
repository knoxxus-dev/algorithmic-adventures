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
    int n,m;cin>>n>>m;
    vector<int>a1(n),a2(m);
    for(auto &it:a1)cin>>it;
    for(auto &it:a2)cin>>it;
    int b=a2[m-1];
    for(int i=0;i<m-1;i++){
        b|=a2[i];
    }
    int y=a1[n-1];
    a1[n-1]|=b;
    int x=a1[n-1];
    for(int i=0;i<n-1;i++){
        y^=a1[i];
        a1[i]|=b;
        x^=a1[i];
    }
    if(!(n&1)){
        cout<<x<<" "<<y<<endl;
    }else{
        cout<<y<<" "<<x<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}