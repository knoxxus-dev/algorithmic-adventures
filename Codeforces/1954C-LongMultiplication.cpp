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
    string s1,s2;
    cin>>s1>>s2;
    int len=s1.size();
    for(int i=0;i<len-1;i++){
        if(s1[i]>s2[i]){
            for(int j=i+1;j<len;j++){
                if(s1[j]>s2[j]){
                    swap(s1[j],s2[j]);
                }
            }
        }else if(s1[i]<s2[i]){
            for(int j=i+1;j<len;j++){
                if(s1[j]<s2[j]){
                    swap(s1[j],s2[j]);
                }
            }
        }else{
            continue;
        }
        break;
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}