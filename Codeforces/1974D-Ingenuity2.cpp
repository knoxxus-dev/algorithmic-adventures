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

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

using namespace std;

void sol(){
    int n;cin>>n;
    string s;cin>>s;
    int x=0,y=0;
    map<char,string>c;
    c['W']="E";
    c['E']="W";
    c['N']="S";
    c['S']="N";
    for(int i=0;i<n;i++){
        if(s[i]=='N'){
            x++;
            continue;
        }
        if(s[i]=='S'){
            x--;
            continue;
        }
        if(s[i]=='E'){
            y++;
            continue;
        }
        if(s[i]=='W'){
            y--;
            continue;
        }
    }
    string ans="";
    ans.append(n,'R');
    if(abs(x)%2==1||abs(y)%2==1){
        cout<<"NO"<<endl;
        return;
    }
    if(x==0&&y==0){
        if(n==2){
            cout<<"NO"<<endl;
            return;
        }else{
            ans[s.find(c[s[0]])]='H';
            ans[0]='H';
        }
    }else{
        for(int i=0;i<n;i++){
            if(s[i]=='N'&&x>0){
                x-=2;
                ans[i]='H';
                continue;
            }
            if(s[i]=='S'&&x<0){
                x+=2;
                ans[i]='H';
                continue;
            }
            if(s[i]=='E'&&y>0){
                y-=2;
                ans[i]='H';
                continue;
            }
            if(s[i]=='W'&&y<0){
                y+=2;
                ans[i]='H';
                continue;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}