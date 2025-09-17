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
    vector<ll>cnt_arr(n+1);
    set<ll>elements;
    for(int i=0;i<n;i++){
        ll element;cin>>element;
        elements.insert(element);
        cnt_arr[element]++;
    }
    vector<ll>prefix(elements.size()+1);
    prefix[0]=0;
    int it=1;
    for(auto &element:elements){
        prefix[it]=cnt_arr[element]+prefix[it-1];
        it++;
    }
    ll ans=0;
    it=1;
    for(auto &element:elements){
        if(cnt_arr[element]>=2){
            ans+=(ll)(cnt_arr[element]*(cnt_arr[element]-1)/2*(prefix[it-1]));
            ans+=(ll)(cnt_arr[element]*(cnt_arr[element]-1)*(cnt_arr[element]-2)/6);
        }
        it++;
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}