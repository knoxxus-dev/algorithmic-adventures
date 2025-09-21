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

void printArray(vector<bool>&arr){
    f(i,arr.size()){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sol(){
    int n;cin>>n;
    vector<int>arr(n);
    vector<bool>arrleft(n+1);
    vector<bool>arrright(n+1);
    string s;cin>>s;
    int countzleft=0;
    int countoleft=0;
    arrleft[0]=1;
    for(int i=0;i<n;i++){
        if(s[i]=='0')countoleft++;
        else countzleft++;
        if(countoleft>=countzleft){
            arrleft[i+1]=true;
        }else{
            arrleft[i+1]=false;
        }
    }
    arrright[n]=1;
    int countzright=0;
    int countoright=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0')countzright++;
        else countoright++;
        if(countoright>=countzright){
            arrright[i]=true;
        }else{
            arrright[i]=false;
        }
    }
    // printArray(arrleft);
    // printArray(arrright);
    float current=0;
    int pos=-1;
    float min=INT_MAX;
    bool flag=0;
    for(int i=1;i<=n-1;i++){
        if(arrleft[i]==1&&arrright[i]==1){
            flag=1;
            current=abs(((float)n)/2-(float)i);
            if(current<min){
                min=current;
                pos=i;
            }
        }
    }
    if(flag==1){
        cout<<pos<<endl;
    }else{
        if(countoright>=countoleft){
            cout<<0<<endl;
        }else{
            cout<<n<<endl;
        }
    }
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}