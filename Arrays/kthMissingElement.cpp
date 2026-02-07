#include<iostream>
#include<vector>
using namespace std;

int kthMissingElement(vector<int>&nums, int k){
    int n = nums.size();
    int max = nums[n-1];
    int maxVal = max + k;

    vector<int> freq(maxVal + 1, 0);

    for(int i = 0; i<n; i++){
        freq[nums[i]] = 1;
    }

    int count = 0;

    for(int i = 1; i<=maxVal; i++){
        if(freq[i] == 0){
            count++;
        }
        if(count == k){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums = {2,3,4,7,11};
    int k = 5;

    int result = kthMissingElement(nums, k);
    cout << "The " << k << "th missing element is: " << result << endl;

    return 0;
}