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
    ll n;cin>>n;
    vector<ll>arr(n);
    ll ans=0;
    map<ll,ll>count;
    vector<ll>madarr;
    ll curMad=0;
    for(auto &it:arr){
        cin>>it;
        ans+=it;
        count[it]++;
        if(count[it]>=2&&it>curMad){
            curMad=it;
            if(curMad!=0){
                madarr.push_back(curMad);
            }
        }else if(curMad!=0){
            madarr.push_back(curMad);
        }
    }
    vector<ll>madarr2;
    curMad=0;
    count.clear();
    for(auto it:madarr){
        ans+=it;
        count[it]++;
        if(count[it]>=2&&it>curMad){
            curMad=it;
            if(curMad!=0){
                madarr2.push_back(curMad);
            }
        }else if(curMad!=0){
            madarr2.push_back(curMad);
        }
    }
    ll c=madarr2.size();
    for(auto it:madarr2){
        ans+=it*c;
        c--;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}