#include <bits/stdc++.h>
using namespace std;
void callByValue(int a)
{
    a++;
}
void callByRef(int *a)
{
    *a += 1;
}
int main()
{
    int a = 3;
    callByValue(a);
    cout << a << endl;
    callByRef(&a);
    cout << a << endl;
    return 0;
}