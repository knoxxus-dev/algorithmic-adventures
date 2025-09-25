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
    string s;cin>>s;
    int cnt0=0,cnt1=0;
    for(auto elem:s){
        if(elem=='0')cnt0++;
        else cnt1++;
    }
    if(cnt0!=cnt1){
        cout<<-1<<endl;
        return;
    }
    vector<int>z;
    deque<char>q;
    int it=0;
    for(auto elem:s){
        q.push_back(elem);
    }
    while(!q.empty()){
        if(q.front()==q.back()){
            if(q.front()=='0'){
                q.push_back('0');
                q.push_back('1');
                z.push_back(n-it);
            }else{
                q.push_front('1');
                q.push_front('0');
                z.push_back(it);
            }
            n+=2;
        }
        while(!q.empty()&&q.front()!=q.back()){
            q.pop_back();
            q.pop_front();
            ++it;
        }
    }
    cout<<z.size()<<endl;
    for(auto elem:z){
        cout<<elem<<" ";
    }
    cout<<endl;
}


int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}