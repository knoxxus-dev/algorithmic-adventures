#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int arr[n];
    for(auto &it:arr)cin>>it;
    vector<int>v;
    v.push_back(arr[0]);
    int count=0;
    for(int i=1;i<n;i++){
        if(v[count]<=arr[i]){
            v.push_back(arr[i]);
            count++;
        } else {
            v.push_back(arr[i]-1);
            v.push_back(arr[i]);
            count+=2;
        }
    }
    cout<<v.size()<<endl;
    for(auto it:v){
        if(it==0)cout<<"1"<<" ";
        else cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}