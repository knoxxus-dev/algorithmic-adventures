#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    int arr1[n-1];
    int arr2[n];
    for(int i=0;i<n;i++){
        arr2[i]=arr[i];
    }
    sort(arr2,arr2+n);
    for(int i=0;i<n;i++){
        if(arr2[i]!=arr[i]){
            cout<<0<<endl;
            return;
        }
    }
    for(int i=0;i<n-1;i++){
        arr1[i]=arr[i+1]-arr[i];
    }
    cout<<*min_element(arr1,arr1+n-1)/2 + 1<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}