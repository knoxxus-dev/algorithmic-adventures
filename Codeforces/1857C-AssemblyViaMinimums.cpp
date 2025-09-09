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
    int len=n*(n-1)/2;
    vector<int>arr(len);
    for(auto &it:arr)cin>>it;
    sort(all(arr));
    int count=n-1;
    int it=0;
    vector<int>ans;
    while(count>0){
        ans.push_back(arr[it]);
        it+=count;
        count--;
    }
    auto x=ans.end();
    x--;
    ans.push_back(*x);
    for(auto element:ans)cout<<element<<" ";
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}