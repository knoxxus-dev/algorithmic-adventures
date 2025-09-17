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

void add(int x,map<int,int>&c){
    int i=2;
    while(i*i<=x){
        while(x%i==0){
            x/=i;
            c[i]++;
        }
        i++;
    }
    if(x>1)c[x]++;
}

void sol(){
    int n;cin>>n;
    vector<int>a(n);
    map<int,int>c;
    for(auto &it:a)cin>>it;
    for(auto e:a){
        add(e,c);
    }
    for(auto e:c){
        if(e.second%n!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}