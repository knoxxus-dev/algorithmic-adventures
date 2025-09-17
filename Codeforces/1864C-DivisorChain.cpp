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

bool bit(int mask,int pos){
    return (mask>>pos)&1;
}

void sol(){
    int t;cin>>t;while(t--){
        int x;cin>>x;
        vector<int>ans;
        int it=0;
        ans.push_back(x);
        while(true){
            if(bit(x,it)){
                if(x==(1<<it)){
                    break;
                }
                x-=(1<<it);
                ans.push_back(x);
            }
            it++;
        }
        while(x!=1){
            x/=2;
            ans.push_back(x);
        }
        cout<<ans.size()<<endl;
        for(auto e:ans){
            cout<<e<<" ";
        }
        cout<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}