#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void sol(){
    int n;
    cin >> n;
    vector<int> v1,v2;
    while(n--){
        int l,r;
        cin >> l >> r;
        v1.push_back(l);
        v2.push_back(r);
    }
    int count = 0;
    int open = 0,closed = 0;
    for(int i = 0; i < v1.size(); i ++){
        if(v1[i]) open++;
        else closed++; 
    }
    if(open < closed) count+= open;
    else count+=closed;

    open = 0,closed = 0;
    for(int i = 0; i < v1.size(); i ++){
        if(v2[i]) open++;
        else closed++; 
    }
    if(open < closed) count+= open;
    else count+=closed;
    cout << count;
}

int main(){
    IOS;
    sol();
    return 0;
}