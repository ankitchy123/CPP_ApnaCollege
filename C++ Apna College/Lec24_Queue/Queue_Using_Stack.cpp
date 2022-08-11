#include <bits/stdc++.h>
using namespace std;

class Queue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
    }
    int pop()
    {
        if (s1.empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int x = s1.top();
        s1.pop();

        if (s1.empty())
        {
            return x;
        }
        int item = pop();
        s1.push(x);

        return item;
    }
    bool isEmpty()
    {
        if (s1.empty())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;

    cout << q.isEmpty() << endl;
    return 0;
}