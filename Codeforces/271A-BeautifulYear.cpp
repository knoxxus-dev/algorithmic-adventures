#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void sol(){
    int t;
    cin >> t;
    while(t++){
        set<int> set1;
        int temp = t;
        while(temp > 0){
            set1.insert(temp%10);
            temp/=10;
        }
        if(set1.size() == 4){
            cout << t;
            return;
        }
    }
}

int main(){
    IOS;
    sol();
    return 0;
}