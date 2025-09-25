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
    int n,m;cin>>n>>m;
    string s;cin>>s;
    map<char,int>chars;
    for(int i=0;i<n;i++){
        chars[s[i]]++;
    }
    char ch='A';
    ll count=0;
    for(int i=0;i<7;i++){
        char c=ch+i;
        if(chars.find(c)==chars.end()){
            count+=m;
        }else{
            if(chars[c]<m)count=count+m-chars[c];
        }
    }
    cout<<count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}