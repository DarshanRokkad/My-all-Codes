// Array implementation of queue
#include <iostream>
using namespace std;

template<class T>
class MyQueue
{
private:
    int capacity;
    int size;
    int front;
    int rear;
    T *a;

public:
    MyQueue(int n)
    {
        capacity = n;
        size = 0;
        front = -1;
        rear = -1;
        a = new T[n];
    }

    bool isFull()
    {
        return (size == capacity);
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    void enque(T x)
    {
        if (isFull())
        {
            cout << "Queue is full." << endl<<endl;
        }
        else
        {
            if(front==-1)
            {
                front++;
            }
            cout<<x<<" is enqued to array."<<endl;
            rear = (rear + 1) % capacity;
            a[rear] = x;
            size++;
            display();
        }
    }

    void deque()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl<<endl; 
        }
        else
        {
            cout<<a[front]<<" is dequed from array."<<endl;
            front = (front + 1) % capacity;
            size--;
            display();
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
            return rear;
        }
    }

    void display()
    {
        if (size == 0)
        {
            cout << "Array is empty." << endl;
        }
        else
        {
            cout << "Circular queue : ";
            int f = front;
            int r = (rear + 1) % capacity;
            do
            {
                cout << a[f] << " ";
                f = (f + 1) % capacity;
            } while (f != r);
            cout << endl;
        }
        cout<<"Size : "<<size<<endl;
        cout << "Front : " << getFront() << endl;
        cout << "Rear : " << getRear() << endl;
        cout << endl;
    }
};

int main()
{
    MyQueue<char> q(5);

    cout << "Queue is empty: " << q.isEmpty() << endl <<endl;
    q.enque('a');
    q.enque('b');
    q.enque('c');
    q.enque('d');
    q.enque('e');
    q.enque('f');

    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    q.enque('g');
    q.enque('h');
    q.enque('i');

    return 0;
}