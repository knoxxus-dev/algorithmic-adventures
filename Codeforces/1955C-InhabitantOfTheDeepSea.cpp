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
    ll n,k;cin>>n>>k;
    vector<ll>ships(n);
    for(auto &it:ships)cin>>it;
    int it1=0,it2=n-1;
    int count=0;
    while(it1<=it2&&k>0){
        if(it1==it2){
            if(ships[it1]<=k){
                count++;
                break;
            }else{
                break;
            }
        }
        if(ships[it1]<ships[it2]){
            if(2*ships[it1]<=k){
                k=k-2*ships[it1];
                ships[it2]-=ships[it1];
                it1++;
                count++;
            }else{
                if(2*ships[it1]-1==k){
                    count++;
                    break;
                }else{
                    break;
                }
            }
        }else if(ships[it1]>ships[it2]){
            if(2*ships[it2]<=k){
                k=k-2*ships[it2];
                ships[it1]-=ships[it2];
                it2--;
                count++;
            }else{
                break;
            }
        }else{
            if(2*ships[it1]<=k){
                k=k-2*ships[it1];
                it1++;
                it2--;
                count+=2;
            }else{
                if(2*ships[it1]-1==k){
                    count++;
                    break;
                }else{
                    break;
                }
            }
        }
    }
    cout<<count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}