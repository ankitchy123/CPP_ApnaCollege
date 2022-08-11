#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "ank";
    string s2 = "it";
    s1.append(s2);
    cout << s1 << endl;
    s1.clear();
    //cout << s1 << endl;

    if (s1.empty())
    {
        cout << "s1 is empty" << endl;
    }
    else
    {
        cout << "s1 is not empty" << endl;
    }

    string s3 = "an";
    string s4 = "kit";
    cout << s3 + s4 << endl;
    string s5 = s3 + s4;
    cout << s4.compare(s3) << endl;

    s5.erase(1, 2);
    cout << s5 << endl;
    return 0;
}