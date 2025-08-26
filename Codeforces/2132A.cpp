#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ld long double
#define ll long long
#define all(v) v.begin(), v.end()
#define pb push_back

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

const int MAX_N=1e5+5;
const ll MOD=1e9+7;
const ll INF=1e9;
const ld EPS=1e-9;

using namespace std;

void sol(){
    int a_length; cin >> a_length;
    string a; cin >> a;
    int b_length; cin >> b_length;
    string b; cin >> b;
    string order; cin >> order;
    string add_beginning, add_end;
    for(int i = 0; i < b_length; i++) {
        if(order[i] == 'D') {
            add_end += b[i];
        } else {
            add_beginning += b[i];
        }
    }
    reverse(add_beginning.begin(), add_beginning.end());
    cout << add_beginning << a << add_end << endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}