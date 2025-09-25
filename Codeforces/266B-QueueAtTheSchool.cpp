#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long

using namespace std;

//done

void sol(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> arr(s.begin(),s.end());
    while(k--){
        for(int i = 0; i < n - 1; i ++){
            if(arr[i] == 'B' && arr[i + 1] == 'G'){
                swap(arr[i],arr[i + 1]);
                i++;    
            }
        }
    }
    for(auto c : arr) cout << c;   
}

int main(){
    IOS;
    sol();
    return 0;
}