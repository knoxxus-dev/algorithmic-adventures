#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()

using namespace std;

//done

void sol(){
    int n;
    cin >> n;
    unordered_map<int,int> umap;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        umap.insert({x,i});
    }
    ll count1 = 0;
    ll count2 = 0;
    int n1;
    cin >> n1;
    for(int i=1;i<=n1;i++){
        int k;
        cin >> k;
        count1 += (ll)umap.at(k); 
        count2 += (ll)(n - umap.at(k) + 1);
    }
    cout << count1 << " " << count2;
}

int main(){
    IOS;
    sol();
    return 0;
}