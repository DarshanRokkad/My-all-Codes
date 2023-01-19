template <class t>
class node
{
public:
    node *prev;
    t data;
    node *next;
    node(t x)
    {
        data = x;
        prev = next = nullptr;
    }
};

template <class t>
class MyStack
{
private:
    node<t> *last, *head;

public:
    MyStack()
    {
        head = last = nullptr;
    }

    void push(t x)
    {
        node<t> *p = new node<t>(x);
        if (head == nullptr)
        {
            last = head = p;
        }
        else
        {
            last->next = p;
            p->prev = last;
            last = last->next;
        }
    }

    void pop()
    {
        if(head)
        {
            node<t> *p = last,*res = last;
            last = last->prev;
            last->next = nullptr ;
            delete p ;
        }
    }

    t peek()
    {
        if (isEmpty())
        {
            return 0;
        }
        else
        {
            return last->data;
        }
    }

    bool isEmpty()
    {
        return (head == nullptr);
    }
};