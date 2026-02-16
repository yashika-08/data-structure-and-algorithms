#include<bits/stdc++.h>
using namespace std;    

    string stringFilter(string str) {
        string result = "";
        
        for(int i = 0; i < str.length(); i++) {
            
           
            if(str[i] == 'b')
                continue;
            
            if(str[i] == 'a' && i + 1 < str.length() && str[i+1] == 'c') {
                i++; 
                continue;
            }
            
            result += str[i];
        }
        
        return result;
    }

int main() {
    string str;
    cin >> str;
    cout << stringFilter(str);
    return 0;
}