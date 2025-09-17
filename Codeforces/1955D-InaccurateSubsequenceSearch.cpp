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
    int n,m,k;cin>>n>>m>>k;
    vector<int>arr(n);
    multiset<int>todo,done,extra;
    for(auto &it:arr)cin>>it;
    for(int i=0;i<m;i++){
        int it;cin>>it;
        todo.insert(it);
    }
    for(int i=0;i<m;i++){
        if(todo.find(arr[i])!=todo.end()){
            done.insert(arr[i]);
            todo.erase(todo.find(arr[i]));
        }else{
            extra.insert(arr[i]);
        }
    }
    int count=(done.size()>=k);
    for(int i=m;i<n;i++){
        int old=arr[i-m];
        if(extra.find(old)!=extra.end()){
            extra.erase(extra.find(old));
        }else if(done.find(old)!=done.end()){
            done.erase(done.find(old));
            todo.insert(old);
        }
        if(todo.find(arr[i])!=todo.end()){
            todo.erase(todo.find(arr[i]));
            done.insert(arr[i]);
        }else{
            extra.insert(arr[i]);
        }
        count+=(done.size()>=k);
    }
    cout<<count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}