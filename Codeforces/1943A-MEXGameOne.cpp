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
    vector<int>freq(n+1,0);
    for(int i=0;i<n;i++){
        int it;cin>>it;
        freq[it]++;
    }
    int count=0;
    for(int i=0;i<=n;i++){
        count+=(freq[i]==1);
        if(count==2||freq[i]==0){
            cout<<i<<endl;
            return;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}