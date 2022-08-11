// Function overloading

#include <bits/stdc++.h>
using namespace std;
class polymorphism
{
public:
    void func()
    {
        cout << "I am a function with no arguments" << endl;
    }
    void func(int x)
    {
        cout << "I am a function with int argument" << endl;
    }
    void func(double x)
    {
        cout << "I am a function with double argument" << endl;
    }
};
int main()
{
    polymorphism obj;
    obj.func();
    obj.func(2);
    obj.func(1.9);
    return 0;
}