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
    int m,k,a,b;cin>>m>>k>>a>>b;
    int taken_b=m/k;
    int taken_a=m%k;
    int remaining_a=max(0,a-taken_a);
    int fancy_a=max(0,taken_a-a);
    int fancy_b=max(0,taken_b-b);
    int swap=min(fancy_b,remaining_a/k);
    cout<<fancy_b+fancy_a-swap<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}