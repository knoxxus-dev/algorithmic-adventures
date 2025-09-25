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

int main(){
    IOS;
    vector<bool>dp(1e5+1,0);
    set<int>collection;
    for(int i=1;i<=1e5;i++){
        string s=to_string(i);
        bool flag=0;
        for(auto c:s){
            if(c!='0'&&c!='1'){
                flag=1;
                break;
            }
        }
        if(flag==0){
            dp[i]=1;
            collection.insert(i);
        }else{
            for(auto c:collection){
                if(i%c!=0)continue;
                if(dp[i/c]==1){
                    dp[i]=1;
                    break;
                }
            }
        }
    }
    int t;cin>>t;while(t--){
        int x;cin>>x;
        if(dp[x]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}