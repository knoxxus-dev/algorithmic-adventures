#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
//done
int main() { _
    int n;
    cin >> n;
    if (n % 2 == 0){
        bool flip = true;
        int count = 2;
        cout << count << "\t";
        for(int i = 1; i < n; i++){
            if(flip){
                count = count - 1;
                cout << count << "\t";
                flip = false;
            } else {
                count = count + 3;
                cout << count << "\t";
                flip = true;
            }
        }
    }
    else cout << -1;
}