#include<iostream>
#include<vector>
using namespace std;

vector<int>plusOne(vector<int>digits){
    int n =digits.size();
    for(int i = n-1; i>=0; i--){
        if(digits[i] < 9){
            digits[i] = digits[i] + 1;
        }
        digits[i] = 0;

    }
    digits.insert(digits.begin(),1);

    return digits;
}

int main(){
    vector<int> digits = {9,9,9};
    vector<int> result = plusOne(digits);
    for(int i = 0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return 0;
}



