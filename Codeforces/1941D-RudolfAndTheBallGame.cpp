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
    int n,m,x;cin>>n>>m>>x;
    set<int>arr[2];
    int ix=0;
    arr[ix].insert(x);
    while(m--){
        int dist;char dir;cin>>dist>>dir;
        while(!arr[ix].empty()){
            int current=*(arr[ix].begin());
            arr[ix].erase(current);
            if(dir=='?' || dir =='0'){
                arr[ix^1].insert((current+dist-1)%n+1);
            }
            if(dir=='?' || dir =='1'){
                arr[ix^1].insert((current-dist-1+n)%n+1);
            }
        }
        ix^=1;
    }
    cout<<arr[ix].size()<<endl;
    for(auto it:arr[ix]){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}