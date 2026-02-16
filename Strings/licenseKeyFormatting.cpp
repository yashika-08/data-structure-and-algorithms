#include<bits/stdc++.h>
using namespace std;


string ReFormatString(string S, int k) {
        
        string temp = "";
        
        
        for(char c : S){
            if(c != '-')
                temp += toupper(c);
        }
        
        string result = "";
        int count = 0;
        
        
        for(int i = temp.length() - 1; i >= 0; i--){
            
            result += temp[i];
            count++;
            
            if(count == k && i != 0){
                result += '-';
                count = 0;
            }
        }
        
        
        reverse(result.begin(), result.end());
        
        return result;
    }

int main() {
    string S;
    int k;
    cin >> S >> k;
    cout << ReFormatString(S, k);
}