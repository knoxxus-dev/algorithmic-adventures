#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    string n;cin>>n;
    for(auto c:n){
        if(c=='1'){
            cout<<13<<endl;
            return;
        }
        else if(c=='3'){
            cout<<31<<endl;
            return;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}