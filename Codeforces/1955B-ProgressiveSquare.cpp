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
    int n,c,d;cin>>n>>c>>d;
    int sq=n*n;
    vector<int>arr1(sq);
    for(auto &it:arr1)cin>>it;
    sort(arr1.begin(),arr1.end());
    int start=arr1[0];
    int arr2[n][n];
    vector<int>arr3;
    arr2[0][0]=start;
    for(int i=1;i<n;i++){
        arr2[i][0]=arr2[i-1][0]+c;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            arr2[i][j]=arr2[i][j-1]+d;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr3.push_back(arr2[i][j]);
        }
    }
    sort(arr3.begin(),arr3.end());
    for(int i=0;i<sq;i++){
        if(arr1[i]!=arr3[i]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}