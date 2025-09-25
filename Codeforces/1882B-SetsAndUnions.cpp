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
    vector<set<int>> v;
    set<int> superset;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        set<int> temp;
        f(j,x){
            int a;cin>>a;
            temp.insert(a);
            superset.insert(a);
        }
        v.push_back(temp);
    }
    int max=0;
    for(auto it:superset){
        set<int>temp;
        f(i,n){
            if(v[i].count(it)==0){
                for(auto it1:v[i]){
                    temp.insert(it1);
                }
            }
        }
        if(max<temp.size())max=temp.size();
    }
    cout<<max<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}