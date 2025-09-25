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
    int n,k;cin>>n>>k;
    int arr[n];
    for(auto &it:arr)cin>>it;
    int temp=arr[k-1];
    for(int i=k-1;i<n;i++){
        if(temp!=arr[i]){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=k-1;i>0;i--){
        if(arr[i-1]==arr[i]){
            k--;
        }else{
            break;
        }
    }
    cout<<k-1<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}