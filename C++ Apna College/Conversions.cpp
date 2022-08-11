#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int a)
{
    int ans = 0;
    int count = 1;
    while (a > 0)
    {
        int lastDigit = a % 10;
        ans += lastDigit * count;
        count *= 2;
        a = a / 10;
    }
    return ans;
}
int octalToDecimal(int a)
{
    int ans = 0;
    int count = 1;
    while (a > 0)
    {
        int lastDigit = a % 10;
        ans += lastDigit * count;
        count *= 8;
        a = a / 10;
    }
    return ans;
}
int hexadecimalToDecimal(string a)
{
    int ans = 0;
    int count = 1;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] >= '0' && a[i] <= '9')
        {
            ans += count * (a[i] - '0');
        }
        else if (a[i] >= 'A' && a[i] <= 'F')
        {
            ans += count * (a[i] - 'A' + 10);
        }
        count *= 16;
    }
    return ans;
}

int decimalToBinary(int a)
{
    int ans = 0;
    int count = 1;
    while (count <= a)
    {
        count *= 2;
    }
    count /= 2;
    while (count > 0)
    {
        int lastDigit = a / count;
        a -= lastDigit * count;
        count /= 2;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}
int decimalToOctal(int a)
{
    int ans = 0;
    int count = 1;
    while (count <= a)
    {
        count *= 8;
    }
    count /= 8;
    while (count > 0)
    {
        int lastDigit = a / count;
        a -= lastDigit * count;
        count /= 8;
        ans = ans * 10 + lastDigit;
    }
    return ans;
}

string decimalToHexadecimal(int a)
{
    int count = 1;
    string ans = " ";
    while (count <= a)
    {
        count *= 16;
    }
    count /= 16;
    while (count > 0)
    {
        int lastDigit = a / count;
        a -= lastDigit * count;
        count /= 16;
        if (lastDigit <= 9)
        {
            ans += to_string(lastDigit);
        }
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    int n1;
    cout << "Enter binary number: ";
    cin >> n1;
    cout << "Binary to decimal of " << n1 << " is: " << binaryToDecimal(n1) << endl;

    int n2;
    cout << "\nEnter octal number: ";
    cin >> n2;
    cout << "Octal to decimal of " << n2 << " is: " << octalToDecimal(n2) << endl;

    string s;
    cout << "\nEnter hexadecimal number: ";
    cin >> s;
    cout << "Hexadecimal to decimal of " << s << " is: " << hexadecimalToDecimal(s) << endl;

    int n3;
    cout << "\nEnter decimal number: ";
    cin >> n3;
    cout << "Decimal to binary of " << n3 << " is: " << decimalToBinary(n3) << endl;

    cout << "\nDecimal to octal of " << n3 << " is: " << decimalToOctal(n3) << endl;

    cout << "\nDecimal to octal of " << n3 << " is: " << decimalToHexadecimal(n3) << endl;
    return 0;
}