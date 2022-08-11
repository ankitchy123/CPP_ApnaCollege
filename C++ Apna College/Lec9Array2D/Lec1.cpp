#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter n & m: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}