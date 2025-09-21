#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

//done 

long long power(int x){
    if(x == 1)
        return 2;
    return 2 * power(x-1);
}

long long luckynumber(int x){
    if(x == 1){
        return 2;
    }
    long long y = (power(x) + luckynumber(x-1));
    return y;
}

int main() { _
    int n;
    cin >> n;
    cout << luckynumber(n) << endl;
    return 0;
}