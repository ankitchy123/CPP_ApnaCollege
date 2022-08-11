#include <bits/stdc++.h>
using namespace std;

void replace(string s)
{
    if (s.size() == 0)
    {
        return;
    }
    string restString;
    if (s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        restString = s.substr(2);
        replace(restString);
    }
    else
    {
        cout << s[0];
        restString = s.substr(1);
        replace(restString);
    }
}
int main()
{
    string s = "pippxxppixipi";
    replace(s);
    return 0;
}