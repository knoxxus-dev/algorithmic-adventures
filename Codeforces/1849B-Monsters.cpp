#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define int long long

//done

using namespace std;

bool compare(PII x,PII y){
    if(x.first!=y.first)  return x.first>y.first;
    return  x.second<y.second;
}

void sol(){
    int n,m;
    cin >> n >> m;
    int ar[n];
    vector<PII> a;
    for(int i = 0; i < n; i ++) cin >> ar[i];
    for(int i = 0; i < n; i ++){
        ar[i] %= m;
        if(ar[i] == 0) ar[i] = m;
        a.push_back({ar[i],i});
    }
    sort(a.begin(),a.end(),compare);
    for(int i = 0; i < n;i ++){
        cout << a[i].second + 1 << " ";
    }
    cout << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}