#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
using namespace std;
 
int main() { _
    set<string> count;
    stringstream SS;
    string s,s1;
    getline(cin, s);
    SS << s;
    do{
        s1.erase();
        SS >> s1;
        count.insert(s1);
    }while(SS);
    if(count.size() == 2) cout << 3;
    else if(count.size() == 3) cout << 2;
    else if(count.size() == 4) cout << 1;
    else cout << 0;
    return 0;
}