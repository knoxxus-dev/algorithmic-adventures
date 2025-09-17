#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    sort(arr,arr+n);
    arr[0]++;
    ll sum=1;
    for(auto it:arr){
        sum=sum*(ll)it;
    }
    cout<<sum<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}