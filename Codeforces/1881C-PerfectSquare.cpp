#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    int n;cin>>n;
    string arr[n];
    f(i,n){
        cin>>arr[i];
    }
    ll ans=0;
    for(int i=0;i*2<n;i++){
        for(int j=0;j*2<n;j++){
            vector<char>a{arr[i][j],arr[n-1-i][n-1-j],arr[j][n-1-i],arr[n-1-j][i]};
            char c=*max_element(a.begin(),a.end());
            for(auto e:a){
                ans+=(ll)(c-e);
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}