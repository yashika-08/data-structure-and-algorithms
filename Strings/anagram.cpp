#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    int n = s.length();
    int m = t.length();

    if (n != m)
    {
        return false;
    }

    unordered_map<char, int> freq1;
    unordered_map<char, int> freq2;

    for (char c : s)
    {
        freq1[c]++;
    }

    for (char c : t)
    {
        freq2[c]++;
    }

    for (auto &entry : freq1)
    {
        char ch = entry.first;
        int count = entry.second;

        if (freq2[ch] != count)
            return false;
    }
    return true;
}
int main()
{
    string s = "listen";
    string t = "siment";

    bool result = isAnagram(s, t);

    if (result)
    {
        cout << s << " and " << t << " are anagrams." << endl;
    }
    else
    {
        cout << s << " and " << t << " are not anagrams." << endl;
    }

    return 0;
}