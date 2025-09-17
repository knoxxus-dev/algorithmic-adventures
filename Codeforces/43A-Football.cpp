#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int count1 = 1;
    int count2 = 0;
    string s3;
    for(int i = 1; i < n; i ++){
        string s2;
        cin >> s2;
        if(s1 == s2){
            count1++;
        } else {
            count2++;
            s3 = s2;
        }
    }
    if(count1 > count2) cout << s1;
    else cout << s3;
}

int main(){
    IOS;
    sol();
    return 0;
}