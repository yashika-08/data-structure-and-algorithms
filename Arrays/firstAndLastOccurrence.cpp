#include<iostream>
#include<vector>
using namespace std;

pair<long,long>occurrences(vector<long>&nums, long x){
    int n = nums.size();
    long first = -1;
    long last = -1;

    for(int i = 0; i<n; i++)
    {
        if(nums[i] == x){
            if(first == -1){
                first = i;
            }
            last = i;
        }
    }

    return {first,last};
}

int main()
{
    vector<long>nums = {1,2,3,4,5,6,7,8,5,10};
    long x = 5;

    pair<long,long>result = occurrences(nums,x);
    cout<<"First Occurrence: "<<result.first<<endl;
    cout<<"Last Occurrence: "<<result.second<<endl;

    return 0;
}