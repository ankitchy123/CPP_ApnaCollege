#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "wikwakkgwc";

    sort(s.begin(), s.end());
    cout << s << endl;
    int count = 0, ans = 0;
    char ans1 = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        if (count >= ans)
        {
            ans = count;
            ans1 = s[i];
        }
    }
    cout << ans1 << " " << ans << endl;

    return 0;
}