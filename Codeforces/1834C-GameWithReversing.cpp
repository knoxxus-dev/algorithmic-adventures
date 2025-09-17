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
    int n;cin>>n;
    string s1,s2;cin>>s1>>s2;
    int it=0;int count=0,rev=0;
    while(it<n){
        if(s1[it]!=s2[it]){
            count++;
        }
        if(s1[it]!=s2[n-it-1]){
            rev++;
        }
        it++;
    }
    int count2;
    if(count==0){
        cout<<0<<endl;
        return;
    }
    if(rev==0){
        cout<<2<<endl;
        return;
    }else{
        count2=2*rev-(1-rev%2);
    }
    int count1=2*count-count%2;
    cout<<min(count1,count2)<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}