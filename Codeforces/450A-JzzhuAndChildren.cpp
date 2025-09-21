#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n,m;
    cin >> n >> m;
    vector<PII> v1;
    for(int i = 1; i <= n; i ++){
        int x;
        cin >> x;
        v1.push_back({x,i});
    }
    int max = 0;
    for(auto c : v1){
        if(c.first >= max) max = c.first;
    }
    int temp;
    temp = max - max%m;
    if(temp == max) temp -= m;
    for(int i = n-1; i >= 0; i --){
        if(v1[i].first > temp){
            cout << v1[i].second;
            return;
        }
    }
}

int main(){
    IOS;
    sol();
    return 0;
}