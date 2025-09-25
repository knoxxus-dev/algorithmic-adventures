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
    if(n==3){
        cout<<"NO"<<endl;
        return;
    }
    if(n%2==1){
        cout<<"YES"<<endl;
        int k=(n-5)/2+1;
        int l=(k*-1)-1;
        for(int i=0;i<n;i++){
            if(i%2==0)cout<<k<<" ";
            else cout<<l<<" ";
        }
        cout<<endl;
    }else{
        int j=1;
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<j<<" ";
            j*=-1;
        }
        cout<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}