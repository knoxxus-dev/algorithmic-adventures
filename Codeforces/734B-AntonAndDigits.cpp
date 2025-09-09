#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    string str,word;
    getline(cin,str);
    vector<int> count;
    stringstream ss(str);
    while(ss >> word){
        count.push_back(stoi(word));
    }
    int min = std::min(count[0],count[2]);
    min = std::min(min,count[3]);
    count[0] = count[0] - min;
    int sum = min * 256;
    min = std::min(count[0],count[1]);
    sum = sum + min * 32;
    cout << sum;
    return 0;
}