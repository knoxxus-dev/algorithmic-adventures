#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define int long long

using namespace std;

// done

void sol(){
    int n;
    cin >> n;
    int arr[n];
    for(auto &it : arr) cin >> it;
    int pos = n - 1;
    while (pos > 0 && arr[pos - 1] >= arr[pos]) --pos;
	while (pos > 0 && arr[pos - 1] <= arr[pos]) --pos;
    cout << pos << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}