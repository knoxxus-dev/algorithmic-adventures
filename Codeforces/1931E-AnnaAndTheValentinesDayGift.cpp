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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    ll n,m;cin>>n>>m;
    vector<string>a(n);
    for(auto &it:a)cin>>it;
    vector<ll>count(10);
    ll d=0;
    for(int i=0;i<n;i++){
        d+=a[i].size();
        int it=a[i].size()-1;
        ll x=0;
        while(a[i][it]=='0'){
            x++;
            it--;
        }
        if(x==0)continue;
        count[x]++;
    }
    ll sub=0;
    bool f=1;
    for(int i=9;i>=1;i--){
        if(count[i]==0)continue;
        if(count[i]%2==0){
            sub+=i*count[i]/2;
        }else{
            if(f){
                sub=sub+i*(count[i]/2+1);
            }else{
                sub=sub+i*(count[i]/2);
            }
            f^=1;
        }
    }
    d-=sub;
    if(d>=m+1){
        cout<<"Sasha"<<endl;
    }else{
        cout<<"Anna"<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}