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
    int arr[n];
    vector<pair<int,char>>v;
    for(auto &it:arr)cin>>it;
    v.push_back({1,'a'});
    string ans="a";
    for(int i=1;i<n;i++){
        if(arr[i]==0){
            char ch='a'+v.size();
            ans+=ch;
            v.push_back({1,(char)('a'+v.size())});
        }else{
            for(int j=0;j<v.size();j++){
                if(v[j].first==arr[i]){
                    ans+=v[j].second;
                    v.push_back({++v[j].first,v[j].second});
                    v.erase(v.begin()+j);
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}