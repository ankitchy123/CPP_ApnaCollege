/*
enqueue(x) --> push (To add an element x at the back of queue)
dequeue() --> (To remove an element from front)
peek() --> Gives value of front
empty() --> To check if queue is empty or not
*/
#include <bits/stdc++.h>
using namespace std;

#define n 5
class Queue
{
    int *arr;
    int front, back;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue underflow" << endl;
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Queue q;
    q.push(2);
    q.push(39);
    q.push(10);
    q.push(0);
    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();
    cout << q.empty() << endl;
    return 0;
}