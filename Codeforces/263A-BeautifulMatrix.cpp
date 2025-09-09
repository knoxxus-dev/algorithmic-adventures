#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long

using namespace std;

int main(){
    IOS;
    int arr[5][5];
    int r,c;
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j ++){
            cin >> arr[i][j];
            if(arr[i][j]){
                r = abs(i-2);
                c = abs(j-2);
                break;
            }
        }   
    }
    cout << r + c;
    return 0;
}