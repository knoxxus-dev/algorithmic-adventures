#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

int dfs(vector<vi>&adj,int p,int c){
    for(auto e:adj[c]){
        if(e==p)continue;
        return dfs(adj,c,e)+1;
    }
    return 1;
}

void sol(){
    int n,t;cin>>n>>t;
    vector<vi>adj(n);
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        --a;--b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int s;cin>>s;
    --s;
    if(adj[s].size()==1){
        if(n%2){
            cout<<"Hermione"<<endl;
        }else{
            cout<<"Ron"<<endl;
        }
        return;
    }
    int s1=dfs(adj,s,adj[s][0]);
    int s2=dfs(adj,s,adj[s][1]);
    if(s1%2==0&&s2%2==0){
        cout<<"Hermione"<<endl;
    }else{
        cout<<"Ron"<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}