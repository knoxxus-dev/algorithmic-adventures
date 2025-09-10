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
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    vector<int>uniq;
    for(int i=0;i<n-1;i++){
        if(arr[i+1]!=arr[i])uniq.push_back(arr[i]);
    }
    uniq.push_back(arr[n-1]);
    int ans=uniq.size();
    for(int i=1;i<uniq.size()-1;i++){
       ans-=(uniq[i]>uniq[i-1]&&uniq[i]<uniq[i+1]);
       ans-=(uniq[i]<uniq[i-1]&&uniq[i]>uniq[i+1]);

    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}