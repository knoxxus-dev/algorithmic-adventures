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
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    ll n,m;cin>>n>>m;
    ll nm=n+m+1;
    vector<ll>arrA(nm);
    vector<ll>arrB(nm);
    vector<bool>takenA(nm);
    for(auto &it:arrA)cin>>it;
    for(auto &it:arrB)cin>>it;
    ll tempn=n,tempm=m;
    ll ngind=-1;
    ll total=0;
    for(int i=0;i<nm-1;i++){
        if(tempn==0){
            total+=arrB[i];
            takenA[i]=false;
            if(arrA[i]>arrB[i]&&ngind==-1){
                ngind=i;
            }
        }else if(tempm==0){
            total+=arrA[i];
            takenA[i]=true;
            if(arrA[i]<arrB[i]&&ngind==-1){
                ngind=i;
            }
        }else{
            if(arrA[i]>arrB[i]){
                takenA[i]=true;
                tempn--;
                total+=arrA[i];
            }else{
                takenA[i]=false;
                tempm--;
                total+=arrB[i];
            }
        }
    }
    for(int i=0;i<nm-1;i++){
        if(i<ngind){
            if(takenA[i]==takenA[ngind]){
                if(takenA[i]==1){
                    cout<<total-arrA[i]+arrA[nm-1]<<" ";
                }else{
                    cout<<total-arrB[i]+arrB[nm-1]<<" ";
                }
            }else{
                if(takenA[i]==1){
                    cout<<total-arrA[i]+arrA[ngind]-arrB[ngind]+arrB[nm-1]<<" ";
                }else{
                    cout<<total-arrB[i]+arrB[ngind]-arrA[ngind]+arrA[nm-1]<<" ";
                }
            }
        }else{
            if(takenA[i]==1){
                cout<<total-arrA[i]+arrA[nm-1]<<" ";
            }else{
                cout<<total-arrB[i]+arrB[nm-1]<<" ";
            }
        }
    }
    cout<<total<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}