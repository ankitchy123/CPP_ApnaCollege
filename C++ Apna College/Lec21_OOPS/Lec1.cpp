#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender; // 1 -> Male, 0 -> Female
    void setName(string s)
    {
        name = s;
    }
    void print()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};
int main()
{
    // student a;
    // a.name = 'Ankit';
    // a.age = 21;
    // a.gender = 1;

    student arr[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter student " << i << " details : ";
        string s;
        cin >> s;
        arr[i].setName(s);
        // cin >> arr[i].name;
        cin >> arr[i].age;
        cin >> arr[i].gender;
    }

    for (int i = 0; i < 3; i++)
    {
        arr[i].print();
    }

    return 0;
}