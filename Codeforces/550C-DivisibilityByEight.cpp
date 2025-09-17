#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    string s;cin>>s;
    string l="00";
    l.append(s);
    s=l;
    bool f=false;
    int ans;
    for(int i=0;i<s.size()-2;i++){
        for(int j=i+1;j<s.size()-1;j++){
            for(int k=j+1;k<s.size();k++){
                string a="";
                a.append(1,s[i]);
                a.append(1,s[j]);
                a.append(1,s[k]);
                int x=stoi(a);
                if(x%8==0){
                    f=true;
                    ans=x;
                    break;
                }
            }
        }
    }
    if(f){
        cout<<"YES"<<endl;
        cout<<ans<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}