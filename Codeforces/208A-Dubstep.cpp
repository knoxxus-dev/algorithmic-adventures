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
    int n = s.length();
    string s1 = "";
    bool flag = false;
    for(int i=0;i<n;i++){
        if(s.substr(i,3) == "WUB"){
            i+=2;
            if(flag){
                s1+=" ";
                flag = false;
            }
        } else {
            s1+=s[i];
            flag = true;
        }
    }
    cout << s1;
}

int main(){
    IOS;
    sol();
    return 0;
}