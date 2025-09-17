#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define ll long long
#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

bool cmp(PII a,PII b){
    if(a.first != b.first) return a.first < b.first;
    else return a.second > b.second;
}

void sol(){
    int s,n;cin>>s>>n;
    vector<PII> v;
    int temp=n;
    while(temp--){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(all(v),cmp);
    for(int i=0;i<n;i++){
        if(s>v[i].first){
            s+=v[i].second;
        } else {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}

int main(){
    IOS;
    sol();
    return 0;
}