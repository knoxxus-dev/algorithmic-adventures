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
    vector<int>arr1(n);
    set<int>arr2;
    for(auto &it:arr1){
        cin>>it;
        arr2.insert(it);
    }
    auto it1=arr2.begin();
    auto it2=arr2.begin();
    int ans=1;int count=0;
    while(it2!=arr2.end()){
        int ind1=*it1;
        int ind2=*it2;
        if(ind2-ind1<n){
            count++;
            ans=max(ans,count);
            it2++;
        }else{
            it1++;
            count--;
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}