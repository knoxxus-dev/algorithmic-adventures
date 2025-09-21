#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    string s;cin>>s;
    for(int i=0;i<s.length();i++){
        if(s.substr(i,3) == "144"){
            i+=2;
        } else if(s.substr(i,2) == "14"){
            i++;
        } else if(s.substr(i,1) == "1"){
        } else {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}   

int main(){
    IOS;
    sol();
    return 0;
}