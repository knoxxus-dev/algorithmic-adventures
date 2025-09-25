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
    int n,m;cin>>n>>m;
    int arr1[n][m];
    int arr2[n][m];
    vector<int>pos1r(n*m),pos1c(n*m),pos2r(n*m),pos2c(n*m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            pos1r[arr1[i][j]-1]=pos2r[arr2[i][j]-1]=i;
            pos1c[arr1[i][j]-1]=pos2c[arr2[i][j]-1]=j;
        }
    }
    vector<set<int>>rows(n),cols(m);
    for(int i=0;i<n*m;i++){
        rows[pos1r[i]].insert(pos2r[i]);
        cols[pos1c[i]].insert(pos2c[i]);
    }
    for(auto elem:rows){
        if(elem.size()>1){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(auto elem:cols){
        if(elem.size()>1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}