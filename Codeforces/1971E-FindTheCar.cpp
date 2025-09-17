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
    ll n,k,q;cin>>n>>k>>q;
    vector<ll>dist(k+1),time(k+1);
    for(int i=0;i<k;i++){
        cin>>dist[i+1];
    }
    for(int i=0;i<k;i++){
        cin>>time[i+1];
    }
    dist[0]=0;
    time[0]=0;
    auto bin=[&](ll distance,ll index)->bool{
        if(dist[index]>=distance)return true;
        return false;
    };
    while(q--){
        ll d;cin>>d;
        if(d==0){
            cout<<0<<" ";
            continue;
        }
        ll ng=0,ok=k;
        while(ok-ng>1){
            ll mid=(ok+ng)/2;
            if(bin(d,mid))ok=mid;
            else ng=mid;
        }
        if(dist[ok]==d){
            cout<<time[ok]<<" ";
            continue;
        }
        ll ans=time[ng]+(d-dist[ng])*(time[ng+1]-time[ng])/(dist[ng+1]-dist[ng]);
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}