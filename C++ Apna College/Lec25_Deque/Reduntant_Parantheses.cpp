#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "((a+b))";
    bool ans = false;
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.top() == '(')
            {
                ans = true;
            }
            while (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    cout << ans;
    return 0;
}