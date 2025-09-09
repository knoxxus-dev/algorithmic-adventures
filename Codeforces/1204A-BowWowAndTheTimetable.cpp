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
    string s;cin>>s;
    int l=s.length();
    if(l==1){
        cout<<0<<endl;
        return;
    }
    if(l%2==1){
        for(int i=1;i<l;i++){
            if(s[i]=='1'){
                cout<<l/2+1<<endl;
                return;
            }
        }
        cout<<l/2<<endl;
    }else{
        cout<<l/2<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}