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
    int arr1[n];
    for(auto &it : arr1) cin>>it;
    int m;cin>>m;
    int arr2[m];
    for(auto &it : arr2) cin>>it;
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr2[j]%arr1[i]==0){
                if(arr2[j]/arr1[i]>=max) max=arr2[j]/arr1[i];
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr2[j]%arr1[i]==0){
                if(arr2[j]/arr1[i]==max) count++;
            }
        }
    }
    cout << count;
}

int main(){
    IOS;
    sol();
    return 0;
}