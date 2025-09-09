#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    s1 = s1 + s2;
    sort(s1.begin(),s1.end());
    sort(s3.begin(),s3.end());
    if(s1 == s3) cout << "YES";
    else cout << "NO";
}

int main(){
    IOS;
    sol();
    return 0;
}