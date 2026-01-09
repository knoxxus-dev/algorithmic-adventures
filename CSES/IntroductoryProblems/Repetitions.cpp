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

void sol() {
    string s; cin >> s;
    char currentChar = s[0];
    int maxLength = 1;
    int currentLength = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentChar = s[i];
            currentLength = 1;
        }
    }
    cout << maxLength;
}

int main() {
    IOS;
    sol();
    return 0;
}