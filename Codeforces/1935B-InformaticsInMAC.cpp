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
    vector<int>arr(n);
    for(auto &it:arr)cin>>it;
    int mex1=0,mex2=0;
    vector<int>cnt1(n),cnt2(n);
    for(int i=0;i<n;i++){
        ++cnt2[arr[i]];
    }
    while(cnt2[mex2]&&mex2!=n){
        mex2++;
    }
    for(int i=0;i<n;i++){
        cnt1[arr[i]]++;
        if(--cnt2[arr[i]]==0&&mex2>arr[i]){
            mex2=arr[i];
        }
        while(cnt1[mex1]&&mex1!=n){
            mex1++;
        }
        if(mex1==mex2){
            cout<<2<<endl;
            cout<<1<<" "<<i+1<<endl;
            cout<<i+2<<" "<<n<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}