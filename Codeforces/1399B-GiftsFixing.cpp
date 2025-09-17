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
    vector<int>a(n);
    vector<int>b(n);
    for(auto &it:a)cin>>it;
    for(auto &it:b)cin>>it;
    int min_a=*min_element(a.begin(),a.end());
    int min_b=*min_element(b.begin(),b.end());
    ll count=0;
    for(int i=0;i<n;i++){
        ll diff_a=a[i]-min_a;
        ll diff_b=b[i]-min_b;
        if(diff_a<diff_b){
            count+=diff_a+(diff_b-diff_a);
        }else if(diff_a>diff_b){
            count+=diff_b+(diff_a-diff_b);
        }else{
            count+=diff_a;
        }
    }
    cout<<count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}