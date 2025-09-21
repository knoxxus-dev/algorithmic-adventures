#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;cin>>n;
    string s;cin>>s;
    vector<pair<char,int>>v;
    for(auto c:s){
        bool flag = true;
        int i;
        if(v.size()){
            for(i=0;i<v.size();i++){
                if(v[i].first == c){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            v.push_back({c,1});
        } else {
            v[i].second++;
        }
    }
    bool check = true;
    for(auto c:v){
        if(c.second%n) check = false;
    }
    string s1 = "";
    if(check){
        for(auto c:v){
            int x=c.second/n;
            for(int i=0;i<x;i++){
                s1+=c.first;      
            }
        }
        for(int i=0;i<n;i++){
            cout<<s1;
        }
    } else cout<<-1;
}

int main(){
    IOS;
    sol();
    return 0;
}