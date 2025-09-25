#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    sort(arr,arr+n);
    int diff=arr[n-1]-arr[0];
    cout<<diff<<" ";
    ll count1(0),count2(0);
    for(int i=0;i<n;i++){
        if(arr[0]==arr[i])count1++;
        if(arr[n-1]==arr[i])count2++;
    }
    if(diff==0){
        ll sum=0;
        while(count1){
            sum+=(ll)--count1;
        }
        cout<<sum;
        return;
    }
    cout<<count1*count2;
}

int main(){
    IOS;
    sol();
    return 0;
}