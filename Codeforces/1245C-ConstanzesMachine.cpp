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
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    string s;cin>>s;
    ll n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='m'||s[i]=='w'){
            cout<<0;
            return;
        }
    }
    vector<ll>dp(n,0);
    dp[0]=1;
    if(n>=2){
        if(s[1]==s[0]&&(s[1]=='u'||s[1]=='n')){
            dp[1]=2;
        }else{
            dp[1]=1;
        }
        for(int i=2;i<n;i++){
            if(s[i]!=s[i-1]){
                dp[i]=dp[i-1];
            }else if(s[i]=='u'||s[i]=='n'){
                if(s[i-1]==s[i-2]){
                    dp[i]=dp[i-1]+dp[i-2];
                    dp[i]%=MOD;
                }else{
                    dp[i]=dp[i-1]*2;
                    dp[i]%=MOD;
                }
            }else{
                dp[i]=dp[i-1];
            }
        }
    }
    cout<<dp[n-1]<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}