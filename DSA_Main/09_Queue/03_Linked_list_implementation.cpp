// Queue implementation using linked list
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = nullptr;
    }
};

class MyQueue
{
private:
    int rear;
    int size;
    node *head = nullptr;
    node *last = nullptr;

public:
    MyQueue()
    {
        rear = -1;
        size = 0;
    }

    void enque(int x)
    {
        node *temp = new node(x);
        // when no node is present
        if (size == 0)
        {
            last = head = temp;
        }
        // when some nodes are present
        else
        {
            last->next = temp;
            last = last->next;
        }
        rear++;
        size++;
    }

    int deque()
    {
        if (size == 0)
        {
            cout << "No nodes." << endl;
            return -1;
        }
        else
        {
            int data = head->data;

            node *temp = head;
            head = head->next;
            delete temp;
            if (!head)
                last = nullptr;

            rear--;
            size--;
            return data;
        }
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getFront()
    {
        if (size == 0)
        {
            return -1;
        }
        else
        {
            return 0;
        }
    }

    int getRear()
    {
        return rear;
    }

    int getSize()
    {
        return size;
    }

    void display()
    {
        if (size == 0)
        {
            cout << "Empty Queue." << endl;
        }
        else
        {
            cout<<"Queue : ";
            node *temp = head;
            for (int i = 0; i < size; i++)
            {
                cout << temp->data;
                if(temp->next)
                    cout << " <-- ";
                temp = temp->next;
            }cout<<endl;
        }
    }
};

int main()
{
    MyQueue q;

    cout << "Queue is empty: " << q.isEmpty() << endl;
    q.enque(7);
    q.enque(45);

    q.enque(1);
    cout << "Front and rear after 3 enque : " << q.getFront() << " " << q.getRear() << endl;

    q.enque(9);
    cout << "Size of queue after enque 4 elements : " << q.getSize() << endl;

    q.enque(17);
    q.enque(3);
    q.display();

    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << q.deque() << endl;
    cout << "Front and rear after all dequeue : " << q.getFront() << " " << q.getRear() << endl;
    cout << "Queue is empty: " << q.isEmpty() << endl;

    return 0;
}