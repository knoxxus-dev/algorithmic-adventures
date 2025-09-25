#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

int isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return i;
        }
    }
    return -1;
}

void sol(){
    int a,b;cin>>a>>b;
    for(int i=a;i<=b;i++){
        int temp=isPrime(i);
        if(temp==-1) continue;
        else {
            cout<<i/temp<<" "<<i-i/temp<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}