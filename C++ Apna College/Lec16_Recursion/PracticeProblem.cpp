#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int prevsum = sum(n - 1);
    return prevsum + n;
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << sum(n);
    return 0;
}