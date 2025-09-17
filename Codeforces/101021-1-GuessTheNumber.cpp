#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    ll l=1,r=1e6+1;
    while(r-l>1){
        ll mid=(l+r)/2;
        cout<<mid<<endl;
        cout<<flush;
        string response;cin>>response;
        if(response=="<")r=mid;
        else l=mid;
    }
    cout<<"! "<<l<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}