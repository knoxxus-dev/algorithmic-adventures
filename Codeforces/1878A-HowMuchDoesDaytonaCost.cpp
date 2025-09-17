#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

void sol(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(auto &it:arr)cin>>it;
    for(auto it:arr){
        if(it==k){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}   

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}