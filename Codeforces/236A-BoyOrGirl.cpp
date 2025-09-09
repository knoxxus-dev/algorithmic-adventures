#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
//done
int main() { _
    string str;
    cin >> str;
    set<char> charset;
    for(auto c : str){
        charset.insert(c);
    }
    if(charset.size() % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}