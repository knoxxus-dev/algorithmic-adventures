#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
//#define PII pair<int,int>
#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
        if(i>=n){
            break;
        }
        if(s[i]=='B'){
            count++;
            i=i+k-1;
        }
    }
    cout<<count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}