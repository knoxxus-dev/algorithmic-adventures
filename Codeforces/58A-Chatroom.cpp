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
    string s1="";
    for(auto c:s){
        if(c == 'h' || c == 'e' || c == 'l' || c == 'o'){
            s1+=c;
        }
    }
    string ch="hello";
    int n=0;
    bool flag=true;
    for(int i=0;i<s1.length();i++){
        if(n==5)break;
        if(ch[n]==s1[i])n++;
        if(i==s1.length()-1 && (n<4 || (n==4 && s1[s1.length()-1]!='o'))) flag = false;
    }
    if(flag)cout<<"YES";
    else cout<<"NO";
}

int main(){
    IOS;
    sol();
    return 0;
}