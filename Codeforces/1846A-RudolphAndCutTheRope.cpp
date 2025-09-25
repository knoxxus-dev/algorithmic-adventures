#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int count=0;
    f(i,n){
        int a,b;cin>>a>>b;
        if(b<a)count++;
    }
    cout<<count<<endl;
}   

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}