// Constructor

#include <bits/stdc++.h>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender; // 1 -> Male, 0 -> Female

    student()
    {
        cout << "Defaul Constructor" << endl;
    } //Defaul Constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    student(string s, int a, bool g)
    {
        cout << "Parameterized Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // Parameterized Constructor

    ~student()
    {
        cout << "Destructor called" << endl;
    }
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

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    student a("Ankit", 21, 1);
    // a.print();
    student b;

    student c = a;
    // c.print();

    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not Same" << endl;
    }

    return 0;
}