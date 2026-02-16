#include<bits/stdc++.h>
using namespace std;

bool metaStrings(string S1, string S2) {
    
    int n = S1.length();
    int m = S2.length();
    
    if(n != m){
        return 0;
    }
    
    if(S1 == S2){
        return 0;
    }
    
    int mismatchcount = 0;
    int first = -1;;
    int second = -1;
    
    for(int i = 0; i<n; i++)
    {
        if(S1[i] != S2[i]){
            mismatchcount++;
            if(mismatchcount == 1){
                first = i;
            }
            else if(mismatchcount == 2){
                second = i;
            }
            else{
                return 0;
            }
            
        }
    }
    
     if(mismatchcount != 2)
        return 0;
        
    if(S1[first] == S2[second] && S1[second] == S2[first])
        return 1;
    
    return 0;
}

int main() {
    string S1, S2;
    cin >> S1 >> S2;
    
    if(metaStrings(S1, S2)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}