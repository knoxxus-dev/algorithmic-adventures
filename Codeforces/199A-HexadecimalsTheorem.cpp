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
    vector<int> v = {0,1,1,2};
    if(n == 0){
        cout << 0 << " " << 0 << " " << 0;
        return;
    }   else if (n == 1){
        cout << 0 << " " << 0 << " " << 1;
        return;
    }   else if (n == 2){
        cout << 0 << " " << 1 << " " << 1;
        return;
    }
    while(true){
        v.push_back(v[v.size() - 1] + v[v.size() - 2]);
        if(v[v.size() - 1] == n){
            cout << v[v.size() - 2] << " " << v[v.size() - 4] << " " << v[v.size() - 5];
            return;
        }
    }
}

int main(){
    IOS;
    sol();
    return 0;
}