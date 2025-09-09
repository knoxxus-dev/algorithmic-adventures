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
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    int n;cin>>n;
    vector<pair<int,int>>ans;
    set<int>found;
    found.insert(1);
    int x=1;
    vector<bool>visited(n+1);
    visited[1]=true;
    while(found.size()!=n){
        int y;
        for(int i=1;i<=n;i++){
            if(visited[i]==false){
                y=i;
                break;
            }
        }
        while(true){
            cout<<"? "<<x<<" "<<y<<endl;
            cout<<flush;
            int mid;cin>>mid;
            if(mid==x){
                found.insert(y);
                ans.pb({x,y});
                visited[y]=true;
                break;
            }else if(found.find(mid)!=found.end()){
                x=mid;
            }else{
                y=mid;
            }
        }
    }
    cout<<"! ";
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<" ";
    }
    cout<<endl;
    cout<<flush;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}