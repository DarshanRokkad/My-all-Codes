//
#include <iostream>
using namespace std;

class Bag
{
public:
    int *a;
    int capacity;
    int top;

    virtual int size();
    virtual bool isEmpty();
    virtual int Element();

    virtual void push(int);
    virtual void pop();
};

class Stack : public Bag
{
public:
    Stack(int);
    ~Stack();
    int size();
    bool isEmpty();
    int Element();

    void push(int);
    void pop();
};
Stack::Stack(int c)
{
    capacity = c;
}

Stack::~Stack()
{
    delete []a ;
}

int Stack::size()
{
    return (top + 1);
}

bool Stack::isEmpty()
{
    return (top == -1);
}

int Stack::Element()
{
    return a[top];
}

void Stack::push(int x)
{
    if (top == capacity - 1)
    {
        cout << "Stack is full." << endl;
    }
    else
    {
        a[++top] = x;
    }
}

void Stack::pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty." << endl;
    }
    else
    {
        top--;
    }
}

int main()
{
    Bag *s = new Stack(5);
    s->push(5);
    s->push(9);
    s->push(7);
    s->push(3);
    cout << "Size of Stack : " << s->size() << endl;
    cout << "Top element of the stack : " << s->Element() << endl;
    s->pop();
    s->pop();
    cout << "Top element of the stack : " << s->Element() << endl;
    cout << "Size of Stack : " << s->size() << endl;
    s->pop();
    s->pop();
    cout << "Is Stack empty : " << s->isEmpty() << endl;

    return 0;
}