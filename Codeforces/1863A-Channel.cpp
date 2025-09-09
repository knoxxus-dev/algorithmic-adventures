#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n,true_count,hypo_count;cin>>n>>true_count;
    hypo_count=true_count;
    int length;cin>>length;
    int minus_count=0;
    string s;cin>>s;
    string s1="";
    if(true_count==n){
            cout<<"YES"<<endl;
            return;
        }
    for(int i=0;i<length;i++){
        if(s[i]=='+'){
            true_count++;
            hypo_count++;
        } else if(s[i]=='-'){
            true_count--;
        }
        if(true_count==n){
            cout<<"YES"<<endl;
            return;
        } else if(hypo_count==n){
            s1="MAYBE";
        }
    }
    if(s1=="MAYBE"){
        cout<<"MAYBE"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}