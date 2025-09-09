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
    int n,x,y;cin>>n>>x>>y;
    vector<int>arr(x);
    for(auto &it:arr)cin>>it;
    int total=x-2;
    sort(all(arr));
    for(int i=0;i<x-1;i++){
        if(arr[i+1]-arr[i]==2)total++;
    }
    if(arr[x-1]-(arr[0]+n)==-2)total++;
    cout<<total<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}