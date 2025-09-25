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
    vector<int>a(n),b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    int m;cin>>m;
    vector<int>d(m);
    for(auto &it:d)cin>>it;
    set<int>set1;
    map<int,int>unset;
    for(int i=0;i<n;i++){
        if(a[i]==b[i])set1.insert(a[i]);
        else unset[b[i]]++;
    }
    bool flag=0;
    for(int i=0;i<m;i++){
        int cur=d[i];
        if(unset.find(cur)==unset.end()&&set1.find(cur)==set1.end()){
            flag=1;
            continue;
        }
        if(unset.find(cur)!=unset.end()){
            flag=0;
            unset[cur]--;
            continue;
        }
        if(set1.find(cur)!=set1.end()){
            flag=0;
            continue;
        }
    }
    if(flag==1){
        cout<<"NO"<<endl;
        return;
    }
    for(auto element:unset){
        if(element.second>0){
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