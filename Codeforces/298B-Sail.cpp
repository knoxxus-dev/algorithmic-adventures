#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n,x1,y1,x2,y2;cin>>n>>x1>>y1>>x2>>y2;
    string s;cin>>s;
    int min_time=0;
    if(x2>x1){
        int xdiff=x2-x1;
        int time=0;
        for(auto c:s){
            if(c=='E')xdiff--;
            time++;
            if(xdiff==0)break;
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
    }
    if(x2<x1){
        int xdiff=x1-x2;
        int time=0;
        for(auto c:s){
            if(c=='W')xdiff--;
            time++;
            if(xdiff==0)break;
            
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
    }
    if(y2>y1){
        int xdiff=y2-y1;
        int time=0;
        for(auto c:s){
            if(c=='N')xdiff--;
            time++;
            if(xdiff==0)break;
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
    }
    if(y1>y2){
        int xdiff=y1-y2;
        int time=0;
        for(auto c:s){
            if(c=='S')xdiff--;
            time++;
            if(xdiff==0)break;
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
    }
    if(x1==x2){
        if(y2==y1){
            cout<<0;
            return;
        } else if(y2>y1){
            int xdiff=y2-y1;
        int time=0;
        for(auto c:s){
            if(c=='N')xdiff--;
            time++;
            if(xdiff==0)break;
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
        } else if(y1>y2){
            int xdiff=y1-y2;
        int time=0;
        for(auto c:s){
            if(c=='S')xdiff--;
            time++;
            if(xdiff==0)break;
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
        }
    }
    if(y1==y2){
        if(x2==x1){
            cout<<0;
            return;
        } else if(x2>x1){
            int xdiff=x2-x1;
        int time=0;
        for(auto c:s){
            if(c=='E')xdiff--;
            time++;
            if(xdiff==0)break;
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
        } else if(x1>x2){
            int xdiff=x1-x2;
        int time=0;
        for(auto c:s){
            if(c=='W')xdiff--;
            time++;
            if(xdiff==0)break;
            
        }
        if(xdiff>0){
            cout<<-1;
            return;
        } else if(time>min_time)min_time=time;
        }
    }
    cout<<min_time;
}   

int main(){
    IOS;
    sol();
    return 0;
}