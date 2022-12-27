// Array implementation of queue
#include <iostream>
using namespace std;

class MyQueue
{
private:
    int capacity;
    int size;
    int front;
    int rear;
    int *a;

public:
    MyQueue(int n)
    {
        capacity = n;
        size = 0;
        front = 0;
        rear = -1;
        a = new int[n];
    }

    void enque(int x)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl;
        }
        else
        {
            int rear = getRear();
            rear = (rear + 1) % capacity;
            a[rear] = x;
            size++;
        }
    }

    int deque()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
            return -1;
        }
        else
        {
            int res = a[front];
            front = (front + 1) % capacity;
            size--;
            return res;
        }
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return front;
        }
    }

    int getRear()
    {
        if (isEmpty())
        {
            return -1;
        }
        else
        {
            return ((front + size - 1) % capacity);
        }
    }

    bool isFull()
    {
        return (size == capacity);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getSize()
    {
        return size;
    }
};

int main()
{
    MyQueue q(5);

    cout << "Queue is empty: " << q.isEmpty() << endl;
    q.enque(7);
    q.enque(45);

    q.enque(1);
    cout << "Front and rear after 3 enque : " << q.getFront() << " " << q.getRear() << endl;

    q.enque(9);
    cout << "Size of queue after enque 4 elements : " << q.getSize() << endl;

    q.enque(17);
    q.enque(3);
    cout << "Queue is full : " << q.isFull() << endl;

    cout << "Now queue has => 7 45 1 9 17 " << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << "Front and rear after all dequeue : " << q.getFront() << " " << q.getRear() << endl;
    cout << q.deque() << endl;

    return 0;
}