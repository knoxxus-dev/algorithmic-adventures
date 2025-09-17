#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

void sol(){
    int n,m;cin>>n>>m;
    vector<string> v;
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    string s1="vika";
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[j][i] == s1[count]){
                count++;
                if(count==4){
                    cout<<"YES"<<endl;
                    return;
                }
                break;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}