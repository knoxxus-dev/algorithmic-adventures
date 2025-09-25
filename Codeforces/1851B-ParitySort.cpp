#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

//done

int main() { _
    int tc;
    string s;
    getline(cin,s);
    tc = stoi(s);
    while(tc --){
        getline(cin,s);
        int n = stoi(s);
        getline(cin,s);
        vector<int> data,data_sorted;
        stringstream ss(s);       
        string word;  
        while(ss >> word){
            data.push_back(stoi(word));
            data_sorted.push_back(stoi(word));
        }
        std::sort(data_sorted.begin(),data_sorted.end());
        bool check = true;
        for(int i = 0 ; i < n ; i ++){
            if((data[i] % 2 == 0 && data_sorted[i] % 2 == 0) || (data[i] % 2 != 0 && data_sorted[i] % 2 != 0)){
                continue;
            } else {
                check = false;
                break;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}