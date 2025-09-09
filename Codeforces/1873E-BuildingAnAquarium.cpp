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
    int n,x;cin>>n>>x;
    int arr[n];
    for(auto &it:arr)cin>>it;
    if(n==1){
        cout<<arr[0]+x<<endl;
        return;
    }
    int max_height=*max_element(arr,arr+n) + x;
    int min_height=1;
    int mid;
    while(min_height<max_height){
        ll sum=0;
        mid=min_height+(max_height-min_height+1)/2;
        for(auto it:arr){
            sum += max((ll)(mid - it), 0LL);
        }
        if(sum<=x)min_height=mid;
        else max_height=mid-1;
    }
    cout<<min_height<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}