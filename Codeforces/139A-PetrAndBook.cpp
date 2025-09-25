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
    vector<int> v;
    for(int i = 0; i < 7; i ++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    while(true){
        for(int i = 0; i < 7; i ++){
            n -= v[i];
            if(n <= 0){
                i++;
                cout << i;
                return;
            }
        }
    }
}

int main(){
    IOS;
    sol();
    return 0;
}