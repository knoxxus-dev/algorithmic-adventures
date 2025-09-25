#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    string s;cin>>s;
    if(s=="abc"){
        cout<<"YES"<<endl;
        return;
    } else if(s=="acb"){
        cout<<"YES"<<endl;
        return;
    } else if(s=="bac"){
        cout<<"YES"<<endl;
        return;
    } else if(s=="bca"){
        cout<<"NO"<<endl;
        return;
    } else if(s=="cab"){
        cout<<"NO"<<endl;
        return;
    } else if(s=="cba"){
        cout<<"YES"<<endl;
        return;
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}