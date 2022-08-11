#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    int rem;
    if (a > b)
    {
        a = a % b;
        while (rem != 0)
        {
            int temp = rem;
            rem = b % rem;
            b = temp;
        }
        return b;
    }
    else
    {
        rem = b % a;
        while (rem != 0)
        {
            int temp = rem;
            rem = a % rem;
            a = temp;
        }
        return a;
    }
}
int main()
{
    int n1, n2;
    cout << "Enter n1 & n2: ";
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << endl;
    return 0;
}