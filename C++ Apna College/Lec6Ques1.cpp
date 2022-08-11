#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1, n2;
    cout << "Enter n1 & n2: ";
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }

    return 0;
}