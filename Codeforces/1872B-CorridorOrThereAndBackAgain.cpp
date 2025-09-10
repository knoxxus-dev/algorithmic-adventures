#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define ll long long
#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

//done

void sol(){
    int n;cin>>n;
    vector<PII> v;
    vector<int> k;
    f(i,n){
        int a,b;cin>>a>>b;
        int temp;
        if(b%2==0){
            temp=b/2-1;
            temp+=a;
            k.push_back(temp);
        } else {
            temp=a+b/2;
            k.push_back(temp);
        }
    }
    cout<<*min_element(all(k))<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}