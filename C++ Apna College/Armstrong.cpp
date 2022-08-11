#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int m = n;
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        sum += pow(a, 3);
        n = n / 10;
    }
    if (sum == m)
    {
        cout << "Number is armstrong";
    }
    else
    {
        cout << "Number is not armstrong";
    }

    return 0;
}