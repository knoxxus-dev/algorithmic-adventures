#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void sol(){
    int n;
    cin >> n;
    int count = 0;
    int temp1 = n;
    while(n--){
        int temp;
        cin >> temp;
        count += temp;
    }
    int count1 = 0;
    for(int i=1;i<=5;i++){
        if((count+i)%(temp1+1) != 1){
            count1++;
        }
    }
    cout << count1;
}

int main(){
    IOS;
    sol();
    return 0;
}