#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n,m;cin>>n>>m;
    int arr[n];
    for(auto &it : arr) cin>>it;
    sort(arr,arr+n);
    int profit=0;
    for(int i=0;i<m;i++){
        if(arr[i]<0) profit+=arr[i];
        else break;
    }
    cout <<abs(profit);
}

int main(){
    IOS;
    sol();
    return 0;
}