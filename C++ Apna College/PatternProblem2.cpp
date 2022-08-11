#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Half Pyramid after 180 degree rotation
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i - 1)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}