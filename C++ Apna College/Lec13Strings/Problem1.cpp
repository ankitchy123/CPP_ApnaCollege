#include <bits/stdc++.h>
using namespace std;

int main()
{
    //cout << 'a' - 'A'; = 32

    string str = "fbAiSrO";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        else
        {
            str[i] += 32;
        }
    }

    cout << str << endl;

    string s1 = "wskaiya";
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << s1 << endl;

    return 0;
}