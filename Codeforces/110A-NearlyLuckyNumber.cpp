#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    ll x;
    cin >> x;
    int count = 0;
    while(x > 0){
        int temp = x % 10;
        x /= 10;
        if(temp == 7 || temp == 4){
            count++;
        }
        if(count > 7){
            cout << "NO";
            return;
        }
    }
    if(count == 4 || count == 7) cout << "YES";
    else cout << "NO";
}

int main(){
    IOS;
    sol();
    return 0;
}