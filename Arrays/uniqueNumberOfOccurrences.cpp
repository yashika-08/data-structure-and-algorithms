#include<iostream>
#include<vector>
#include<unordered_map>
#include<unordered_set>
using namespace std;

bool uniqueNumberOccurence(vector<int>&nums){
    int n = nums.size();
    unordered_map<int,int>freq;

    for(int num: nums){
        freq[num]++;
    }

    unordered_set<int>seen;

   for(auto &entry: freq)
{
    int count = entry.second;

    if(seen.find(count) != seen.end()){
        return false;
    }

    seen.insert(count);
}

    return true;
}

int main()
{
    vector<int> nums = {1,2,2,1,1,3};

    if(uniqueNumberOccurence(nums))
        cout << "True - All occurrences are unique" << endl;
    else
        cout << "False - Occurrences are not unique" << endl;

    return 0;
}
