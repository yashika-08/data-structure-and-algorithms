#include<bits/stdc++.h>
using namespace std;

 int stockBuySell(vector<int> &arr) {
        int profit = 0;
        int n = arr.size();
        
        for(int i = 1; i <n; i++){
            if(arr[i] > arr[i - 1]){
                profit += arr[i] - arr[i - 1];
            }
        }
        
        return profit;
}

int main(){
    vector<int> arr = {1, 5, 3, 8, 12};
    cout << stockBuySell(arr) << endl; 
    return 0;
}