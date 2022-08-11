#include <bits/stdc++.h>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int x = power(n, p - 1);
    return n * x;
}
int main()
{
    int n, p;
    cout << "Enter n & p: ";
    cin >> n >> p;
    cout << power(n, p) << endl;
    return 0;
}