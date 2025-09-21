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
    int a,b,n;cin>>a>>b>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    ll max=0;
    for(auto it:arr){
        if(it<a)max+=(ll)it;
        else max+=(ll)a-1;
    }
    max+=(ll)b;
    cout<<max<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}