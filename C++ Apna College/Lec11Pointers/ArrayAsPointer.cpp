#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 9, 1, 10};
    // cout << *a << endl;
    // cout << *(a + 1) << endl;

    int *ptr = a;
    for (int i = 0; i < 4; i++)
    {
        cout << *ptr << endl;
        ptr++;
    }

    return 0;
}