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
    ll n;cin>>n;
    vector<int>arr;
    for(int i=0;i<32;i++){
        arr.push_back(n&1);
        n=n>>1;
    }
    int it=0;
    while(it<=30){
        if(arr[it]==1&&arr[it+1]==1){
            arr[it++]=-1;
            while(arr[it]!=0){
                arr[it++]=0;
            }
            arr[it]=1;
            continue;
        }
        it++;
    }
    cout<<32<<endl;
    for(auto element:arr){
        cout<<element<<" ";
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}