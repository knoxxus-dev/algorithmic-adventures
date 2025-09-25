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
    int n;double d,h;cin>>n>>d>>h;
    vector<int>heights(n);
    for(auto &it:heights)cin>>it;
    double tan=h/(d/2);
    double single_area=d*h/2;;
    double ans=0;
    for(int i=0;i<n-1;i++){
        if(heights[i]+h<=heights[i+1]){
            ans+=single_area;
        }else{
            double x=(double)heights[i+1]-(double)heights[i];
            double w=x/tan;
            double area=2*(w*x/2+(d/2-w)*x);
            ans+=area;
        }
    }
    ans+=single_area;
    cout<<setprecision(10)<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}