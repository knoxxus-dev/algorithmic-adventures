#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
//done
int main() 
{ _
    string str;
    int x;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,str);
    stringstream ss(str);       
    string word;      
    vector<float> words;  
    while(ss >> word){
        words.push_back(stof(word));
    }
    float avg = 0;
    for(auto c : words) avg+=c;
    avg = avg/words.size();
    cout << avg;
    
    return 0; 
}