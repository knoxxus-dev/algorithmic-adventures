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
    ll n;cin>>n;
    string s;cin>>s;
    if(n%2==1){
        cout<<-1<<endl;
        return;
    }
    vector<int>cnt(26);
    for(int i=0;i<n;i++){
        cnt[s[i]-'a']++;
    }
    for(auto it:cnt){
        if(it*2>n){
            cout<<-1<<endl;
            return;
        }
    }
    int pairs=0;
    vector<int>pair_cnt(26);
    for(int i=1;i<=n/2;i++){
        if(s[i-1]==s[n-i]){
            pairs++;
            pair_cnt[s[i-1]-'a']++;
        }
    }
    for(auto it:pair_cnt){
        if(it*2>pairs){
            cout<<it<<endl;
            return;
        }
    }
    cout<<(pairs+1)/2<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}