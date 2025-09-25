#include <bits/stdc++.h>
#include <string>
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
    string s;cin>>s;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            int condition=2;
            for(int j=0;j<i;j++){
                for(int k=j+i;k<n;k+=i){
                    if(s[k]!=s[j]){
                        condition--;
                    }
                }
            }
            if(condition>0){
                cout<<i<<endl;
                return;
            }
            condition=2;
            for(int j=n-i;j<n;j++){
                for(int k=j-i;k>=0;k-=i){
                    if(s[k]!=s[j]){
                        condition--;
                    }
                }
            }
            if(condition>0){
                cout<<i<<endl;
                return;
            }
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}