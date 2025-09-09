#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pii pair<int,int>
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
 
void search(vector<pii>&a,vector<int>&parent,string &s,vector<int>&ch,int current){
    char c=s[parent[current]];
    if(!(c=='L'&&current==a[parent[current]].first)&&!(c=='R'&&current==a[parent[current]].second)){
        ch[current]=ch[parent[current]]+1;
    }else{
        ch[current]=ch[parent[current]];
    }
    if(a[current].first!=-1){
        search(a,parent,s,ch,a[current].first);
    }
    if(a[current].second!=-1){
        search(a,parent,s,ch,a[current].second);
    }
}
 
void sol(){
    int n;cin>>n;
    string s;cin>>s;
    vector<pii>a(n);
    vector<int>parent(n);
    parent[0]=-1;
    for(int i=0;i<n;i++){
        int l,r;cin>>l>>r;
        a[i].first=--l;
        a[i].second=--r;
        if(a[i].first!=-1){
            parent[a[i].first]=i;
        }
        if(a[i].second!=-1){
            parent[a[i].second]=i;
        }
    }
    vector<int>ch(n);
    ch[0]=0;
    if(a[0].first!=-1){
        search(a,parent,s,ch,a[0].first);
    }
    if(a[0].second!=-1){
        search(a,parent,s,ch,a[0].second);
    }
    int mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i].first==-1&&a[i].second==-1){
            mn=min(mn,ch[i]);
        }
    }
    cout<<mn<<endl;
}
 
int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}