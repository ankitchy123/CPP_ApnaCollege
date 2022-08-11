// #include <bits/stdc++.h>
#include <iostream>
using namespace std;
class A
{
    int b;
    void funcB()
    {
        cout << "Func B" << endl;
    }

public:
    int a;
    void funcA()
    {
        cout << "Func A" << endl;
    }

protected:
    int c;
    void funcC()
    {
        cout << "Func C" << endl;
    }
};
int main()
{
    A obj;
    obj.funcA();
    // obj.funcB(); // Will throw an error
    // obj.b = 2;
    return 0;
}