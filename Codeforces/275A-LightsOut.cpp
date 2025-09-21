#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    int arr[5][5];
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j ++){
            if(i == 0 || j == 0 || i == 4 || j == 4 ){
                arr[i][j] = 0;
                continue;
            }
            cin >> arr[i][j];
        }
    }
    for(int i = 1; i < 4; i ++){
        for(int j = 1; j < 4; j ++){
            int sum = arr[i+1][j] + arr[i-1][j] + arr[i][j] + arr[i][j+1] + arr[i][j-1];
            if(sum % 2 == 0) cout << 1;
            else cout << 0;
        }
        cout << endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}