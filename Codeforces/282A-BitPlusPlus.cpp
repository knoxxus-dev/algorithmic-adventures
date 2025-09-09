#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    int count = 0;
    while(n --){
        string s;
        cin >> s;
        for(auto c : s){
            if(c == '+'){
                count++;
                break;
            } else if(c == '-'){
                count--;
                break;
            }
        }
    }
    cout << count;
}

int main(){
    IOS;
    sol();
    return 0;
}