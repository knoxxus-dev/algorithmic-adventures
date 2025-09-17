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
    auto dist = [](double x1,double y1,double x2,double y2){
        return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    };
    double hx,hy,ax,ay,bx,by;
    cin>>hx>>hy>>ax>>ay>>bx>>by;
    double ha=dist(hx,hy,ax,ay),hb=dist(hx,hy,bx,by);
    double oa=dist(0,0,ax,ay),ob =dist(0,0,bx,by);
    double ab=dist(ax,ay,bx,by);
    double ans=1e9;
    ans=min(ans,max(ha,oa));
    ans=min(ans,max(hb,ob));
    ans=min(ans,max({ab/2,ha,ob}));
    ans=min(ans,max({ab/2,hb,oa}));
    cout<<setprecision(10)<<fixed<<ans<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}