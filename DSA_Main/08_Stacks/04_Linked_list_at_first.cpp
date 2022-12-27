// Linked list implementation of stack at head
// i.e insert at the head and delete at the head not at the end
#include <iostream>
using namespace std;

template <class T>
class node
{
public:
    T data;
    node *next;
    node(T x)
    {
        data = x;
        next = nullptr;
    }
};
node<int> *head = nullptr;

template <class T>
class MyStack
{
private:
    int top;
    int Capacity;

public:
    MyStack(int n)
    {
        top = -1;
        Capacity = n;
    }

    void push(T x)
    {
        if (top == (Capacity - 1))
        {
            cout << "Stack is full." << endl;
        }
        else
        {
            node<int> *temp = new node<int>(x);
            temp->next = head;
            head = temp;
            top++;
        }
    }

    T pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else
        {
            T res = head->data;
            node<int> *p = head;
            head = head->next;
            delete p;
            top--;
            return res;
        }
    }

    T peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
        else
        {
            return (head->data);
        }
    }

    bool isEmpty()
    {
        return (head == nullptr);
    }

    int size()
    {
        return (top + 1);
    }
};

int main()
{
    MyStack<int> s(3);
    s.push(5);
    s.push(6);
    s.push(9);
    s.push(45);
    cout << "Size : " << s.size() << endl;
    cout << s.pop() << " is poped." << endl;
    cout << "peek : " << s.peek() << endl;
    cout << s.pop() << " is poped." << endl;
    cout << s.pop() << " is poped." << endl;
    cout << s.pop() << " is poped." << endl;

    return 0;
}