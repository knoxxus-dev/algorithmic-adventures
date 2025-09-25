#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define PII pair<int,int>
#define ll long long
#define all(v) v.begin(), v.end()
#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n;cin>>n;
    int a,b;cin>>a>>b;
    vector<PII>v;
    f(i,n-1){
        int x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    f(i,n-1){
        if(v[i].first>=a && v[i].second>=b){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<a<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}