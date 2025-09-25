#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int x,y,z;cin>>x>>y>>z;
    int a,b,c;
    c=(int)sqrt(z*y/x);
    b=y/c;
    a=x/b;
    cout<<4*(a+b+c);
}

int main(){
    IOS;
    sol();
    return 0;
}