#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            arr[i][0] = 1;
            continue;
        }

        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                arr[i][j] = 1;
                continue;
            }

            int ele = arr[i - 1][j - 1] + arr[i - 1][j];
            arr[i][j] = ele;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}