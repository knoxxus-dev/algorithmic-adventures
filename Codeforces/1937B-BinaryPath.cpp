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
    int n;cin>>n;
    string row1,row2;cin>>row1>>row2;
    int current_row=0;
    int current_col=0;
    string s="";
    s+=row1[0];
    int count=1;
    for(int i=0;i<n-1;i++){
        string r=string(1,row1[current_col+1]);
        string d=string(1,row2[current_col]);
        string dr=string(1,row2[current_col+1]);
        if(current_row==0){
            if(row1[current_col+1]==row2[current_col]){
                s=s.append(r);
                count++;
            }else if(row1[current_col+1]>row2[current_col]){
                s=s.append(d);
                s=s.append(dr);
                current_row++;
            }else if(row1[current_col+1]<row2[current_col]){
                s=s.append(r);
                count=1;
            }
        }else{
            s=s.append(dr);
        }
        current_col++;
    }
    if(s.size()==n)s+=row2[n-1];
    cout<<s<<endl;
    cout<<count<<endl;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}