#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter n & m: ";
    cin >> n >> m;
    int a[n][m];
    cout << "Enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int key;
    cout << "Enter key: ";
    cin >> key;
    int r = 0, c = m - 1;
    bool ans = 0;
    while (r < n && c >= 0)
    {
        if (a[r][c] == key)
        {
            cout << "Element found at position: " << r + 1 << "*" << c + 1 << endl;
            ans = 1;
            break;
        }
        else if (a[r][c] > key)
        {
            c--;
        }
        else if (a[r][c] < key)
        {
            r++;
        }
    }
    if (ans == 0)
    {
        cout << "-1";
    }

    return 0;
}