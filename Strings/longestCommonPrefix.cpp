#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string> &strs) 
{
    if (strs.empty()) {
        return "";
    }

    int numOfStrings = strs.size();

    for (int i = 0; i < strs[0].size(); i++) {
        char c = strs[0][i];
        for (int j = 1; j < numOfStrings; j++) {
            if (i >= strs[j].size() || strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0];
}

int main() {
    vector<string> str = {"geeksforgeeks", "geek", "geeks"};
    cout << "Longest common prefix: " << longestCommonPrefix(str) << endl;
    return 0;
}