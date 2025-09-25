#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

//done

int main() { _
    string str;
    getline(cin,str);
    int cane = 0;
    int snow = 0;
    string rem_str = "";
    for(char c : str){
        if(c == '?'){
            cane++;
            continue;
        } else if(c == '*'){
            snow++;
            continue;
        }
        rem_str = rem_str + c;
    }
    string length_str;
    getline(cin,length_str);
    int length = stoi(length_str);
    int diff = length - rem_str.length();
    if((diff > 0 && snow == 0) || (diff < 0 && (snow + cane) < -diff)){
        cout << "Impossible" << endl;
    } else if(diff == 0){
        cout << rem_str << endl;
    } else if(diff < 0 && (snow + cane) >= -diff){
        string str2 = "";
        int check = 0;
        int count = -diff;
        for(int i = 0; i < str.length(); i ++){
            if(i + 1 <= str.length() && (str[i + 1] != '*' && str[i + 1] != '?')){
                str2 = str2 + str[i];
            } else if(i + 1 <= str.length() && (str[i + 1] == '*' || str[i + 1] == '?') && check < count){
                check++;
                i++;
            } else if(i + 1 <= str.length() && (str[i + 1] == '*' || str[i + 1] == '?')){
                str2 = str2 + str[i];
                i++;
            }
        }
        cout << str2 <<endl;
    } else if(diff > 0 && snow >= 1){
        string str2 = "";
        int check = 0;
        for(int i = 0; i < str.length(); i ++){
            if(i + 1 <= str.length() && (str[i + 1] != '*' && str[i + 1] != '?')){
                str2 = str2 + str[i];
            } else if(i + 1 <= str.length() && str[i + 1] == '*' && check == 0){
                check ++; 
                while(diff -- + 1){
                    str2 = str2 + str[i];
                }
                i++;
            } else if(i + 1 <= str.length() && (str[i + 1] == '*' || str[i + 1] == '?')){
                str2 = str2 + str[i];
                i++;
            }
        }
        cout << str2 <<endl;
    }
    return 0;
}