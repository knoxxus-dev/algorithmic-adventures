#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define ll long long
#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    vector<PII> v;
    for(int i = 0;i < n;i++){
        int k;cin >>k;
        v.push_back({k,i+1});
    }
    sort(all(v));
    if(v[0].first == v[1].first){
        cout << "Still Rozdil";
    } else {
        cout <<v[0].second;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}