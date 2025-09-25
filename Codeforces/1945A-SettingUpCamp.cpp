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
    ll a,b,c;cin>>a>>b>>c;
    ll sum=0;
    sum+=a;
    sum=sum+b/3;
    b%=3;
    if(b==0){
        sum=sum+c/3;
        if(c%3!=0){
            sum++;
        }
        cout<<sum<<endl;
    }else if(b==1){
        if(c<2){
            cout<<-1<<endl;
            return;
        }else{
            c-=2;
            sum++;
        }
        sum=sum+c/3;
        if(c%3!=0){
            sum++;
        }
        cout<<sum<<endl;
    }else{
        if(c<1){
            cout<<-1<<endl;
            return;
        }else{
            c-=1;
            sum++;
        }
        sum=sum+c/3;
        if(c%3!=0){
            sum++;
        }
        cout<<sum<<endl;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}