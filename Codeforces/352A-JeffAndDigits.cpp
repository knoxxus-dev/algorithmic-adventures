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
    int count5 = 0;
    int count0 = 0;
    for(int i=0;i<n;i++){
        int k;cin >> k;
        if(k == 0) count0++;
        else count5++;
    }
    if(count5 < 9 && count0 != 0){
        cout << "0";
        return;
    }
    if(count0 == 0 || count5 < 9){
        cout << -1;
        return;
    }
    count5 /= 9;
    for(int i = 1;i <= count5;i ++){
        cout << "555555555";
    }
    for(int i = 1; i <= count0; i ++){
        cout << "0";
    }
}

int main(){
    IOS;
    sol();
    return 0;
}