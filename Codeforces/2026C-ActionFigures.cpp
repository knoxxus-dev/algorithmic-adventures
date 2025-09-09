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
    s[0]='0';
    vector<ll>arr;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    ll ans=(n*(n+1))/2;
    ll itblack=-1;
    ll itwhite=n-1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='0'){
            itblack=i;
            break;
        }
    }
    ll count=0;
    while(true){
        count+=itwhite+1;
        itblack--;
        itwhite--;
        if(itblack==-1||itwhite==-1){
            break;
        }
        while(s[itblack]!='0'){
            itblack--;
            if(itblack==-1)break;
        }
        while(s[itwhite]!='1'){
            itwhite--;
            if(itwhite==-1)break;
        }
        if(itblack==-1||itwhite==-1){
            break;
        }
        if(itblack>itwhite){
            itblack=itwhite-1;
            while(s[itblack]!='0'){
                itblack--;
                if(itblack==-1)break;
            }
            if(itblack==-1){
                break;
            }
        }
    }
    if(itwhite==-1){
        cout<<ans-count<<endl;
    }else{
        vector<ll>remaining;
        for(ll i=itwhite;i>=0;i--){
            if(s[i]=='1')remaining.pb(i+1);
        }
        ll c=remaining.size()/2;
        ll it=0;
        while(c--){
            count+=remaining[it++];
        }
        cout<<ans-count<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}