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
    int n;cin>>n;
    string s=to_string(n);
    int l=s.size();
    vector<pair<ll,ll>>ans;
    for(int len=1;len<=6;len++){
        string v;
        for(int i=0;i<len;i++){
            v+=s[i%l];
        }
        ll val=stoll(v);
        for(int a=1;a<=10000;a++){
            ll b=n*a-val;
            if(1<=b&&b<=10000){
                if(l*a-b==len){
                    ans.push_back({a,b});
                }
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto e:ans){
        cout<<e.first<<" "<<e.second<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}