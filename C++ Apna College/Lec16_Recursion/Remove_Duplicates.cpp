#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(string s)
{
    if (s.size() == 0)
    {
        return;
    }

    if (s[0] == s[1])
    {
        removeDuplicates(s.substr(1));
    }
    if (s[0] != s[1])
    {
        cout << s[0];
        removeDuplicates(s.substr(1));
    }
}
int main()
{
    string s = "aaaabbbeeecdddd";
    removeDuplicates(s);
    return 0;
}