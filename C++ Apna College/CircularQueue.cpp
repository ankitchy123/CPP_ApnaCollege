#include <bits/stdc++.h>
using namespace std;

struct circularQueue
{
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(struct circularQueue *q)
{
    if ((q->r == q->f))
    {
        return 1;
    }
    return 0;
}
int isFull(struct circularQueue *q)
{
    if ((q->r + 1) % q->size == q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(struct circularQueue *q, int val)
{
    if (isFull(q))
    {
        cout << "Queue overflow" << endl;
    }
    else
    {
        q->r = (q->r + 1) % q->size;
        q->arr[q->r] = val;
        cout << "Enqued element: " << val << endl;
    }
}
void dequeue(struct circularQueue *q)
{
    //int a = -1;
    if (isEmpty(q))
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        q->f = (q->f + 1) % q->size;
    }
}

void frontElement(struct circularQueue *q)
{
    if (isEmpty(q))
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        int a = q->arr[q->f + 1];
        cout << "Element at front is " << a << endl;
    }
}
int main()
{
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));
    enqueue(&q, 4);
    enqueue(&q, 10);
    enqueue(&q, 0);
    enqueue(&q, 1);

    frontElement(&q);
    dequeue(&q);
    dequeue(&q);

    frontElement(&q);
    dequeue(&q);
    dequeue(&q);
    return 0;
}