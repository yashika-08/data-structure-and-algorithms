#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool isBalanced(string& s) {
        
        stack<char> st;
        
        for(int i = 0; i < s.length(); i++) {
            
           
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else {
                
                if(st.empty())
                    return false;
                
                char top = st.top();
                st.pop();
                
                
                if((s[i] == ')' && top != '(') ||
                   (s[i] == '}' && top != '{') ||
                   (s[i] == ']' && top != '[')) {
                    return false;
                }
            }
        }
        
        
        return st.empty();
    }
};


int main() {
    string s;
    cin >> s;
    
    Solution solution;
    if(solution.isBalanced(s)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    
    return 0;
}