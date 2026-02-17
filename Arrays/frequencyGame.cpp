#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int LargButMinFreq(int arr[], int n) {
        
        unordered_map<int,int> freq;
        
        
        for(int i = 0; i < n; i++){
            freq[arr[i]]++;
        }
        
        
        int minFreq = INT_MAX;
        for(auto &entry : freq){
            minFreq = min(minFreq, entry.second);
        }
        
        
        int result = INT_MIN;
        for(auto &entry : freq){
            if(entry.second == minFreq){
                result = max(result, entry.first);
            }
        }
        
        return result;
    }
};


int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Solution solution;
    cout << solution.LargButMinFreq(arr, n) << endl;
    
    return 0;
}