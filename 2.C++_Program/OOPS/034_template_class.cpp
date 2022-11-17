// template class
#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T *str;
    int top;
    int size;

public:
    stack(int sz)
    {
        size = sz ;
        top = -1 ;
        str = new T[size];
    }
    void push(T x);
    T pop();
};

template <class T>
void stack<T>::push(T x)
{
    if(top==size-1)
    {
        cout<<"Stack is full"<<endl;
    }
    else
    {
        top++;
        str[top] = x;
    }
}

template <class T>
T stack<T>::pop()
{
    int x = 0 ;
    if(top==-1)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        x= str[top];
        top--;
    }
    return x;
}

int main()
{
    // creation of any type of stack
    stack<int> s(10);
    // stack<float> s2(2);
    s.push(3);
    s.push(9);
    s.pop();
    s.pop();

    return 0;
}