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
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    map<int,vector<int>>same;
    for(auto element:arr)same[element%y].push_back(element);
    ll sum=0;
    for(auto vec:same){
        map<int,int>count;
        for(auto element:vec.second)count[element%x]++;
        for(auto element:count){
            if(element.first==0){
                sum+=((ll)element.second*(element.second-1));
                continue;
            }
            if(element.first==x/2&&x%2==0){
                sum+=((ll)element.second*(element.second-1));
                continue;
            }
            if(count.find(x-element.first)!=count.end()){
                sum+=((ll)count[x-element.first]*element.second);
            }
        }
    }
    cout<<sum/2<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}