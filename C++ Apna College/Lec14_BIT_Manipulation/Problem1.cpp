// Write a program to check if a given number is power of 2

#include <bits/stdc++.h>
using namespace std;

int ispowerof2(int n)
{
    return (n && !(n & (n - 1)));
}
int main()
{
    cout << ispowerof2(32);
    return 0;
}