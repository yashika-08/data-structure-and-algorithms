#include <bits/stdc++.h>
using namespace std;

long long fact(int n) {
    long long res = 1;
    for(int i = 2; i <= n; i++)
        res *= i;
    return res;
}

long long countStrings(int n) {
    long long ans = 0;

    for(int i = 0; i <= 1; i++) {
        for(int j = 0; j <= 2; j++) {
            if(i + j <= n) {
                long long ways = fact(n) / 
                    (fact(i) * fact(j) * fact(n - i - j));
                ans += ways;
            }
        }
    }

    return ans;
}

int main() {
    int n = 3;  
    cout << countStrings(n) << endl;
    return 0;
}
