#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    ll n,k;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n/2){
            cout << 2*k - 1;
            return;
        } else {
            k -= n/2;
            cout << 2*k;
        }
    } else {
        if(k <= (n/2 + 1)){
            cout << 2*k - 1;
            return;
        } else {
            k = k - n/2 - 1;
            cout << 2*k;
        }
    }
}

int main(){
    IOS;
    sol();
    return 0;
}