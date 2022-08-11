#include <bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex const &obj)
    {
        Complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};
int main()
{
    Complex c1(2, 5), c2(6, 3);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}