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
    int n;cin>>n;
    ll a=10000,b=10001,c=10002;
    cout<<a<<" "<<b<<" "<<c<<" ";
    for(int i=3;i<n;i++){
        cout<<c+1<<" ";
        b=c;
        c=c+1;
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}