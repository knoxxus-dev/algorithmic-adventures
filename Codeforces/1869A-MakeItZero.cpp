#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);
//#define PII pair<int,int>
//#define ll long long
//#define all(v) v.begin(), v.end()
//#define UII unordered_map<int,int>
//#define f(i,n) for(int i=0;i<n;i++)

using namespace std;

void sol(){
    int n;cin>>n;
	int arr[n];
	for (auto &it:arr)cin>>it;
	if(n%2!=0){
		cout <<"4"<<endl;
		cout <<"1 "<<n-1<<endl;
		cout <<"1 "<<n-1<<endl;
		cout <<n-1<<' '<<n<<endl;
		cout <<n-1<<' '<<n<<endl;
	}else{
		cout <<"2"<<endl;
		cout <<"1 "<<n<<endl;
		cout <<"1 "<<n<<endl;
	}
	return;
}

int main(){
    IOS;
    int t;cin>>t;while(t--) sol();
    return 0;
}