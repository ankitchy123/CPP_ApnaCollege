#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << *ptr << endl; // 10

    int **q = &ptr;
    cout << *q << endl;  // Address of a
    cout << **q << endl; // Value of a
    return 0;
}