#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define int long long

using namespace std;

//done

void sol(){
    string s;cin>>s;
    s = '0' + s;
    int counter = s.size();
    for(int i = counter - 1;i>=0;i--){
        if(s[i] >= '5'){
            s[i-1]++;
            counter=i;
        }
    }
    for(int i = (s[0] == '0');i < s.size();i ++){
        cout << (i>=counter?'0':s[i]);
    }
    cout << endl;
}

main(){
    IOS;
    int t;
    cin >> t;
    while(t--) sol();
    return 0;
}