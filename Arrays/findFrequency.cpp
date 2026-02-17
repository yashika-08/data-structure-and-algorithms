#include<bits/stdc++.h>
using namespace std;

int findFrequency(vector<int>& arr, int x) {
    int count = 0;
    
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == x) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, x;
    cin >> n >> x;
    
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << findFrequency(arr, x) << endl;
    
    return 0;
}