#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    char arr[n + 1];
    cout << "Enter array: ";
    cin >> arr;

    bool check = 1;
    for (int i = 0; i <= n / 2; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
    {
        cout << "Word is a palindrome" << endl;
    }
    else
    {
        cout << "Word is not a palindrome" << endl;
    }

    return 0;
}