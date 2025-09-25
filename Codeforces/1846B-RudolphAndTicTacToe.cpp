#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    char arr[3][3];
    for(auto &it:arr)cin>>it;
    char temp;
    f(i,3){
        temp=arr[i][0];
        if(temp=='.')continue;
        if(temp==arr[i][1] && temp==arr[i][2]){
            cout<<temp<<endl;
            return;
        }
    }
    f(i,3){
        temp=arr[0][i];
        if(temp=='.')continue;
        if(temp==arr[1][i] && temp==arr[2][i]){
            cout<<temp<<endl;
            return;
        }
    }
    temp=arr[0][0];
    if(temp==arr[1][1] && temp==arr[2][2] && temp!='.'){
        cout<<temp<<endl;
        return;
    }
    temp=arr[0][2];
    if(temp==arr[1][1] && temp==arr[2][0] && temp!='.'){
        cout<<temp<<endl;
        return;
    }
    cout<<"DRAW"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}