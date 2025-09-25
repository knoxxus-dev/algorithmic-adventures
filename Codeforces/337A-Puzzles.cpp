#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n,k;cin>>n>>k;
    int arr[k];
    for(auto &it:arr)cin>>it;
    sort(arr,arr+k);
    int min=arr[n-1]-arr[0];
    for(int i=0;i<=k-n;i++){
        if((arr[i+n-1]-arr[i])<min)min=arr[i+n-1]-arr[i];
    }
    cout<<min;
}

int main(){
    IOS;
    sol();
    return 0;
}