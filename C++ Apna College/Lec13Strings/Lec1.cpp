#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    string str1(5, 'n');
    cout << str1 << endl;

    string str2 = "AnkitChaudhary";
    cout << str2 << endl;

    string str3;
    cout << "enter string: ";
    getline(cin, str3);
    cout << str3 << endl;
    return 0;
}