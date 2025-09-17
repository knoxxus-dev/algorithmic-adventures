#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    string s;
    getline(cin,s);
    sort(s.begin(),s.end());
    string s1 = "";
    for(auto c : s){
        if(c != '+'){
            s1 += c;
            s1+='+';
        }
        
    }
    s1.erase(s1.length() - 1);
    cout << s1;
}

int main(){
    IOS;
    sol();
    return 0;
}