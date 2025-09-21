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
    string s1,s2;cin>>s1>>s2;
    ll sum=0;
    if(s1.length()>s2.length()){
        sum=s1[0]-'0'+9*(s1.length()-1);
    }else if(s1.length()<s2.length()){
        sum=s2[0]-'0'+9*(s2.length()-1);
    }else{
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s2[i]){
                sum=abs((s1[i]-'0')-(s2[i]-'0'))+9*(s1.length()-i-1);
                break;
            }
        }
    }
    cout<<sum<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}