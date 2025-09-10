#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pii pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define uii unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    string s;cin>>s;
    int n=s.size();
    map<int,int>m;
    m[0]=1;
    int pre=0,ans=0;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='0')pre--;
        else pre++;
        ans+=m[pre]%MOD*(n-i+1)%MOD;
        m[pre]=m[pre]+i+1;
        m[pre]%=MOD;
        ans%=MOD;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}