#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

bool twoSumExistance(vector<int>&nums, int target){
    int n = nums.size();
    unordered_set<int>seen;
    for(int i =0 ; i<n; i++){
        int needed = target - nums[i];
        if(seen.find(needed) != seen.end()){
            return true;
        }

        seen.insert(nums[i]);
    }
return false;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    int target = 9;
    cout<<twoSumExistance(nums, target)<<endl;
    return 0;
}