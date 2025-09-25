#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>

using namespace std;

//done

void sol(){
    int n;cin>>n;
    for(int i=0;i<2*n+1;i++){        
            for(int j=0;j<abs(n-i);j++){
                cout<<"  ";
            }
            cout<<0;
            if(i<=n){
                for(int j=1;j<i;j++){
                    cout<<" "<<j;
                }
                if(i!=0){
                    for(int j=i;j>=0;j--){
                        cout<<" "<<j;
                    }
                }
            } else {
                for(int j=1;j<=2*n-i;j++){
                    cout<<" "<<j;
                }
                if(i!=2*n){
                    for(int j=2*n-i-1;j>=0;j--){
                        cout<<" "<<j;
                    }
                }
            }
            cout<<endl;
    }
}

int main(){
    IOS;
    sol();
    return 0;
}