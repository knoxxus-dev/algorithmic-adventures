#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    int l,m,n,k,a;
    cin >> l >> m >> n >> k >> a;
    int count = 0;
    for(int i = 1; i <= a; i ++){
        if(i % l == 0 || i % m == 0 || i % n == 0 || i % k == 0){
            count ++;
        }
    }
    cout << count;
}

int main(){
    IOS;
    sol();
    return 0;
}