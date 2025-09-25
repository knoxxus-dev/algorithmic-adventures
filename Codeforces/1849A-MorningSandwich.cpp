#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

//done

int main() { _
  int tc;
    cin >> tc;
    while(tc --){
        int b,c,h;
        cin >> b >> c >> h;
        int filling = c + h;
        if(b > filling){
            cout << filling + filling+1 << endl;
        } else if(b < filling){
            cout << b + b-1 << endl;
        } else if(b == filling){
            cout << b + b-1 << endl;
        }   
    }
    return 0;
}