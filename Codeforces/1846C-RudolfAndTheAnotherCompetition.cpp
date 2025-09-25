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
    ll n,m,h;cin>>n>>m>>h;
    vector<ll>rudolf(m);
    for(auto &it:rudolf)cin>>it;
    sort(all(rudolf));
    int count=0;
    ll rudolf_score=0,rudolf_penalty=0,rudolf_prev=0;
    ll rudolf_minutes=h;
    for(int i=0;i<m;i++){
        if(rudolf[i]<=rudolf_minutes){
            rudolf_minutes-=rudolf[i];
            rudolf_score++;
            rudolf_penalty+=rudolf_prev+rudolf[i];
            rudolf_prev+=rudolf[i];
        }else{
            break;
        }
    }
    for(int i=1;i<n;i++){
        vector<int>comp(m);
        for(auto &it:comp)cin>>it;
        sort(all(comp));
        ll score=0,penalty=0,prev=0;
        ll minutes=h;
        for(int j=0;j<m;j++){
            if(comp[j]<=minutes){
                minutes-=comp[j];
                score++;
                penalty+=prev+comp[j];
                prev+=comp[j];
            }else{
                break;
            }
        }
        if(score>rudolf_score){
            count++;
        }else if(score==rudolf_score&&penalty<rudolf_penalty){
            count++;
        }   
    }
    cout<<++count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}