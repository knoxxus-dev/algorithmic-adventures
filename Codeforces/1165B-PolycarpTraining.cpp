#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

//done

int main() { _
    string str;
    getline(cin,str);
    int n = stoi(str);
    string word;
    str = "";
    getline(cin,str);
    vector<int> count;
    stringstream ss(str);
    while(ss >> word){
        count.push_back(stoi(word));
    }
    std::sort(count.begin(),count.end());
    int day_count = 0;
    int day_counter = 1;
    for(int i = 0;i < count.size();i++){
        if(day_counter > count[i]){
            continue;
        }
        day_counter++;
        day_count++;
    }
    cout << day_count;
    return 0;
}
