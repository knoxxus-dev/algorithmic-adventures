#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void sol(){
    int k,n;cin>>k>>n;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++){
        int l;cin>>l;
        arr[i]=l;
        arr1[i]=l;
    }
    sort(arr,arr+n);
    sort(arr1,arr1+n,::greater<>());
    int min=0;
    int temp=k;
    int count=0;
    while(temp--){
        if(arr[count]){
            min+=arr[count];
            arr[count]--;
        } else {
            count++;
            temp++;
        }
    }
    temp=k;
    int max=0;
    while(temp--){
        max+=arr1[0];
        arr1[0]--;
        sort(arr1,arr1+n,::greater<>());
    }
    cout<<max<<" "<<min;
}

int main(){
    IOS;
    sol();
    return 0;
}