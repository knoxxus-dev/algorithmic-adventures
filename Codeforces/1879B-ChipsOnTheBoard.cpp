#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int arr1[n];
    int arr2[n];
    for(auto &it:arr1)cin>>it;
    for(auto &it:arr2)cin>>it;
    int min1=*min_element(arr1,arr1+n);
    int min2=*min_element(arr2,arr2+n);
    ll min_cost1=0;
    ll min_cost2=0;
    for(auto it:arr1){
        min_cost1+=(ll)min2+(ll)it;
    }
    for(auto it:arr2){
        min_cost2+=(ll)min1+(ll)it;
    }
    cout<<min(min_cost1,min_cost2)<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}