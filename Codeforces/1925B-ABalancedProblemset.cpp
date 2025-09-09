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
    int x,n;cin>>x>>n;
    int it=1;int max_gcd=1;
    while(it*it<=x){
        if(x%it==0){
            if(n<=x/it)max_gcd=max(max_gcd,it);
            if(n<=it)max_gcd=max(max_gcd,x/it);
        }
        it++;
    }
    cout<<max_gcd<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}