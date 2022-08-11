#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int k = i;
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << k-- << " ";
        }
        k = 2;
        for (int j = 1; j <= i - 1; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
    return 0;
}