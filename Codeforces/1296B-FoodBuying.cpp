#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

//done

int main() { _
    int tc;
    cin >> tc;
    while(tc --){
        int x;
        cin >> x;
        int temp = x;
        int count = 0;
        while(temp >= 10){
            count += temp/10 * 10;
            temp = temp - temp/10 * 10 + (temp/10 * 10)/10;
        }
        count += temp;
        cout << count << endl;
    }
    return 0;
}