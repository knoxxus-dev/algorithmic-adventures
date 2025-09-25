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

ll calculate_sum(vector<int>permutation,int arr[][5]){
    ll sum=0;
    int it=0,temp_it=0;
    while(temp_it<=3){
        while(it<4){
            sum=sum+(ll)arr[permutation[it]-1][permutation[it+1]-1]+(ll)arr[permutation[it+1]-1][permutation[it]-1];
            it+=2;
        }
        it=++temp_it;
    }
    return sum;
    
}

void sol(){
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    vector<int>permutation;
    for(int i=0;i<5;i++){
        permutation.push_back(i+1);
    }
    ll max=0;
    int count=0;
    do{
        count++;
        ll result=calculate_sum(permutation,arr);
        if(max<result)max=result;
    }while(next_permutation(permutation.begin(),permutation.end()));
    cout<<max<<endl;
}

int main(){
    IOS;
    sol();
    return 0;
}