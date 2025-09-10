#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

void sol(){
    int n;cin>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    ll max=0;
    int max_even_1=-1;
    int max_even_2=-1;
    int max_odd_1=-1;
    int max_odd_2=-1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0 && arr[i]>max_even_1){
            max_even_2=max_even_1;
            max_even_1=arr[i];
        } else if(arr[i]%2!=0 && arr[i]>max_odd_1){
            max_odd_2=max_odd_1;
            max_odd_1=arr[i];
        }   else if(arr[i]%2==0 && arr[i]>max_even_2){
            max_even_2=arr[i];
        }  else if(arr[i]%2!=0 && arr[i]>max_odd_2){
            max_odd_2=arr[i];
        }
    }
    if((max_even_2==-1 && max_odd_2==-1) || (max_even_1==-1 && max_odd_2==-1)){
        cout<<-1;
        return;
    } 
    int max_even=max_even_1+max_even_2;
    int max_odd=max_odd_1+max_odd_2;
    if(max_even>max_odd)cout<<max_even;
    else cout<<max_odd;
}

int main(){
    IOS;
    sol();
    return 0;
}