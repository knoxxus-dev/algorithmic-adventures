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

vector<string>chars={"BG","BR","BY","GR","GY","RY"};

void sol(){
    ll n,q;cin>>n>>q;
    vector<string>arr(n);
    for(auto &it:arr)cin>>it;
    vector<ll>left(6,-1);
    vector<ll>right(6,-1);
    vector<vector<ll>>leftRecent(n,vector<ll>(6)),rightRecent(n,vector<ll>(6));
    for(int i=0;i<n;i++){
        string s=arr[i];
        for(int j=0;j<6;j++){
            if(chars[j]==s){
                left[j]=i;
                break;
            }
        }
        for(int j=0;j<6;j++){
            leftRecent[i][j]=left[j];
        }
    }
    for(int i=n-1;i>=0;i--){
        string s=arr[i];
        for(int j=0;j<6;j++){
            if(chars[j]==s){
                right[j]=i;
                break;
            }
        }
        for(int j=0;j<6;j++){
            rightRecent[i][j]=right[j];
        }
    }
    for(int i=0;i<q;i++){
        ll l,r;cin>>l>>r;
        l--;r--;
        string s1=arr[l];
        string s2=arr[r];
        int charind1;
        int charind2;
        for(int j=0;j<6;j++){
            if(chars[j]==s1){
                charind1=j;
            }
            if(chars[j]==s2){
                charind2=j;
            }
        }
        if((charind1==charind2)||(charind1+charind2!=5)){
            cout<<abs(l-r)<<endl;
            continue;
        }
        ll totalMin1=INF;
        for(int j=0;j<6;j++){
            if(j==charind1||j==charind2)continue;
            if(leftRecent[l][j]!=-1)totalMin1=min(totalMin1,abs(leftRecent[l][j]-l)+abs(leftRecent[l][j]-r));
            if(rightRecent[l][j]!=-1)totalMin1=min(totalMin1,abs(rightRecent[l][j]-l)+abs(rightRecent[l][j]-r));
        }
        ll totalMin2=INF;
        for(int j=0;j<6;j++){
            if(j==charind1||j==charind2)continue;
            if(leftRecent[l][j]!=-1)totalMin2=min(totalMin1,abs(leftRecent[r][j]-l)+abs(leftRecent[r][j]-r));
            if(rightRecent[l][j]!=-1)totalMin2=min(totalMin1,abs(rightRecent[r][j]-l)+abs(rightRecent[r][j]-r));
        }
        if(totalMin1==INF&&totalMin2==INF){
            cout<<-1<<endl;
        }else{
            cout<<min(totalMin1,totalMin2)<<endl;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}