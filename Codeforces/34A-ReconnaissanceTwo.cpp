#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    int arr[n];
    for(auto &it : arr) cin >> it;
    int index = 0;
    int min = abs(arr[0] - arr[1]);
    for(int i = 0; i < n-1; i ++){
        if(min >= abs(arr[i]-arr[i + 1])){
            min = abs(arr[i]-arr[i + 1]);
            index = i;
        }
    }
    if(min >= abs(arr[0]-arr[n-1])){
            cout << n << " " << 1;
            return;
    }
    cout << index + 1 << " " << index + 2;
}

int main(){
    IOS;
    sol();
    return 0;
}