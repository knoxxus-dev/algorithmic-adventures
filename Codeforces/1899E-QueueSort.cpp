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
    vector<int>a(n);
    for(auto &it:a)cin>>it;
    int it=n-1;
    while(a[it]>=a[it-1]&&it!=0){
        it--;
    }
    for(int i=0;i<it;i++){
        if(a[i]<=a[it]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<it<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}