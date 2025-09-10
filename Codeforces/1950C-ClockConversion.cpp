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
    string s1="AM",s2="PM";
    int a=(s[0]-'0')*10+(s[1]-'0');
    int b=(s[3]-'0')*10+(s[4]-'0');
    if(a==0&&b==0){
        cout<<"12:00 AM"<<endl;
        return;
    }else if(a==12&&b==0){
        cout<<"12:00 PM"<<endl;
        return;
    }
    string b1;
    if(b<10){
        b1="0";
        b1=b1+to_string(b);
    }else{
        b1=to_string(b);
    }
    if(a<12&&a!=0){
        string a1;
        if(a<10){
            a1="0"+to_string(a);
        }else{
            a1=to_string(a);
        }
        cout<<a1<<":"<<b1<<" "<<s1<<endl;
    }else if(a==12){
        cout<<a<<":"<<b1<<" "<<s2<<endl;
    }else if(a==0){
        cout<<12<<":"<<b1<<" "<<s1<<endl;
    }else{
        a-=12;
        string a1;
        if(a<10){
            a1="0"+to_string(a);
        }else{
            a1=to_string(a);
        }
        cout<<a1<<":"<<b1<<" "<<s2<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}