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
    ll n,m,k;cin>>n>>m>>k;
    if(k==1){
        cout<<1<<endl;
    }else if(k==2){
        if(m<=n){
            cout<<m<<endl;
        }else if(m>n){
            cout<<n+(m-n)/n<<endl;
        }
    }else if(k==3){
        if(m<=n){
            cout<<0<<endl;
        }else if(m>n){
            cout<<m-n-(m-n)/n<<endl;
        }
    }else{
        cout<<0<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}