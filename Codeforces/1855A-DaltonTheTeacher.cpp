#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define int long long

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    int count = 0;
    for(int i = 0; i < n; i ++){
        if(i+1 == a[i]) count++;
    }
    if(count % 2 == 0) cout << count/2 << endl;
    else cout << count/2 + 1 << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}