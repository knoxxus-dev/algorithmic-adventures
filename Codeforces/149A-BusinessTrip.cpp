#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<12;i++){
        int k;cin>>k;
        v.push_back(k);
    }
    sort(v.rbegin(),v.rend());
    int count=0;
    if(n == 0){
        cout << 0;
        return;
    }
    for(int i=0;i<12;i++){
        n-=v[i];
        count++;
        if(n<=0){
            break;
        }
    }
    if(n>0) cout << -1;
    else cout << count;
}

int main(){
    IOS;
    sol();
    return 0;
}