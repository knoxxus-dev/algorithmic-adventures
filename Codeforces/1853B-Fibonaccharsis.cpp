#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

bool possible(int number1,int number2,int index){
    if(index==1){
        if(number2-number1>number1)return false;
        else return true;
    }
    
    if(number2-number1>number1){
        return false;
    } else {
        return possible(number2-number1,number1,index-1);
    }
}

void sol(){
    int n,k;cin>>n>>k;
    int count=0;
    if(n%2==0){
        for(int i=n/2;i<=n;i++){
            if(possible(i,n,k-2))count++;
        }
        cout<<count<<endl;
        return;
    } else {
        for(int i=n/2+1;i<=n;i++){
            if(possible(i,n,k-2))count++;
        }
        cout<<count<<endl;
        return;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}