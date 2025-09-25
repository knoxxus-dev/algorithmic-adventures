#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

void sol(){
    string s1,s2;
    cin >> s1 >> s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout << s1.compare(s2);
}   

int main(){
    IOS;
    sol();
    return 0;
}