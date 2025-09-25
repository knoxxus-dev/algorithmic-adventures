#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
#define ll long long

using namespace std;

//done

void sol(){
    int n;cin>>n;
    ll sum=0;
    ll total_min=LONG_LONG_MAX;
    ll total_second_min=LONG_LONG_MAX;
    for(int i=0;i<n;i++){
        int m;cin>>m;
        int arr[m];
        for(auto &it:arr)cin>>it;
        sort(arr,arr+m);
        sum+=(ll)arr[1];
        if(arr[0]<total_min)total_min=arr[0];
        if(arr[1]<total_second_min)total_second_min=arr[1];
    }
    sum=sum+total_min-total_second_min;
    cout<<sum<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}