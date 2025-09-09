#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    string s;
    cin >> s;
    vector<char> arr(s.begin(),s.end());
    for(int i = 0; i < arr.size(); i ++){
        if(arr[i] == '-'){
            if(arr[i + 1] == '-'){
                cout << '2';
                i++;
            } else {
                cout << '1';
                i++;
            }
        } else {
            cout << '0';
        }
    }
}

int main(){
    IOS;
    sol();
    return 0;
}