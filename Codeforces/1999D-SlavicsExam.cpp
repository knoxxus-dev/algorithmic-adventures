#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pii pair<int,int>
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define uii unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)
#define vi vector<int>

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    string s,t;cin>>s>>t;
    int s1=s.size();
    int s2=t.size();
    string ans="";
    int it1=0,it2=0;
    while(it1<s1&&it2<s2){
        if(s[it1]==t[it2]){
            ans.append(1,s[it1]);
            it2++;
        }else if(s[it1]=='?'){
            ans.append(1,t[it2]);
            it2++;
        }else if(s[it1]!=t[it2]){
            ans.append(1,s[it1]);
        }
        it1++;
    }
    if(it2==s2){
        cout<<"Yes"<<endl;
        for(int i=ans.size();i<s1;i++){
            if(s[i]=='?'){
                ans.append(1,'a');
                continue;
            }
            ans.append(1,s[i]);
        }
        cout<<ans<<endl;
    }else{
        cout<<"No"<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}