#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    string s;cin>>s;
    int count=0;
    char ch=s[0];
    for(auto c:s){
        if(ch==c){
            count++;
            if(count==7){
                cout<<"YES";
                return;
            }
        } else {
            count=1;
            ch=c;
        }
    }
    cout<<"NO";
}

int main(){
    IOS;
    sol();
    return 0;
}