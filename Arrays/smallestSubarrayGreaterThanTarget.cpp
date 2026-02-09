#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int minimumSubarray(vector<int>&nums, int target){
    int n = nums.size();
    int minLength = INT_MAX;
    int sum = 0;
    int start = 0;

    for(int i = 0; i<n; i++)
    {
        sum += nums[i];
        while(sum > target){
            int window_length = i - start + 1;
            minLength = min(window_length, minLength);
            sum = sum - nums[start];
            start++;

        }
    }

    if(minLength == INT_MAX){
        return 0;
    }
    else{
        return minLength;
    }
}

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;
    cout<<minimumSubarray(nums, target)<<endl;
    return 0;
}