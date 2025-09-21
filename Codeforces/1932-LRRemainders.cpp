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
    vector<ll>a(n);
    for(auto &it:a)cin>>it;
    string s;cin>>s;
    vector<ll>ans;
    int it1=0,it2=n-1;
    int it=0;
    while(it1!=it2){
        if(s[it]=='L')it1++;
        else it2--;
        it++;
    }
    ll cur=0;
    cur=a[it1]%m;
    ans.push_back(cur);
    for(int i=n-2;i>=0;i--){
        if(s[i]=='L'){
            it1--;
            cur=cur%m*a[it1]%m;
            cur%=m;
            ans.push_back(cur);
        }else{
            it2++;
            cur=cur%m*a[it2]%m;
            cur%=m;
            ans.push_back(cur);
        }
    }
    for(int i=n-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}