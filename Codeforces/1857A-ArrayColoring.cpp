#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void sol(){
    int n;
    cin >> n;
    int arr[n];
    for(auto &it : arr) cin >> it;
    int count = 0;
    for(int c : arr){
        if(c % 2 != 0){
            count++;
        }
    }
    if(count % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}