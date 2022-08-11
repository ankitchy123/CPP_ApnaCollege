#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;

    cout << a << endl;
    cout << *ptr << endl; // Value stored in a
    cout << &a << endl;   // Address of a
    cout << ptr << endl;  // Address of a

    *ptr = 20; // We can access and modify the variable
    cout << a << endl;
    return 0;
}