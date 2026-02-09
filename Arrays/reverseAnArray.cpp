#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseAnArray(vector<int>&nums){
    reverse(nums.begin(), nums.end());
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    reverseAnArray(nums);
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}