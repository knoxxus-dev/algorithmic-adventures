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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    int n;cin>>n;
    string s;cin>>s;
    if(n==2){
        cout<<(s[0]-'0')*10+s[1]-'0'<<endl;
        return;
    }
    vector<vi>results(n-1);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                results[i].push_back((s[j]-'0')*10+s[j+1]-'0');
                j++;
            }else{
                results[i].push_back(s[j]-'0');
            }
        }
    }
    int ans=INT_MAX;
    for(auto arr:results){
        int mn=arr[0];
        for(int i=1;i<arr.size();i++){
            mn=min(mn+arr[i],mn*arr[i]);
        }
        ans=min(ans,mn);
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}