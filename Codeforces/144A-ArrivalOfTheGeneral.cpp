#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

int main() { _
    int x;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string input;
    getline(cin,input);
    stringstream ss(input);
    int num;      
    vector<int> nums;  
    while(ss >> num) nums.push_back(num);
    int count = 0;
    int max = *max_element(nums.begin(), nums.end());
    int min = *min_element(nums.begin(), nums.end());
    int min_id;
    int count_min;
    vector<int> nums_reverse = nums;
    reverse(nums_reverse.begin(), nums_reverse.end());
    min_id = std::distance(nums_reverse.begin(),std::find(nums_reverse.begin(),nums_reverse.end(),min));
    min_id = nums.size() - 1 - min_id;
    std::vector<int>::iterator max_id = std::find(nums.begin(), nums.end(),max);
    count += std::distance(nums.begin(), max_id);
    if(std::distance(nums.begin(),max_id) < min_id){
        count += nums.size() - min_id - 1;
    } else {
        count += nums.size() - min_id - 2;
    }
    cout << count << endl;
}