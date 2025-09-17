#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    n--;
    int i;
    cin >> i;
    int max = i,min = i;
    int count = 0;
    while(n --){
        cin >> i;
        if(i > max){
            max = i;
            count ++;
        } else if(i < min){
            min = i;
            count ++;
        }
    }
    cout << count;
}

int main(){
    IOS;
    sol();
    return 0;
}