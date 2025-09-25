#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

bool isPrime(int x){
    for(int i = 2; i <= sqrt(x);i++){
        if(x % i == 0) return false;
    }
    return true;
}

void sol(){
    int x,y;
    cin >> x >> y;
    int a = x + 1;
    while(true){
        if(isPrime(a)) break;
        a++;
    }
    if(a == y) cout << "YES";
    else cout << "NO";
}

int main(){
    IOS;
    sol();
    return 0;
}