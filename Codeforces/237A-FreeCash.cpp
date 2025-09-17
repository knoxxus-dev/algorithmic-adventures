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

void sol(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        arr[i]=a*60+b;
    }
    sort(arr.begin(),arr.end());
    int mx=0;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
            mx=max(mx,count);
        }else{
            mx=max(mx,++count);
            count=0;
        }
    }
    mx=max(mx,++count);
    cout<<mx<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}