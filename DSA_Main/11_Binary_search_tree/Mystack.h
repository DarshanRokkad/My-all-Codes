// stack with doubly linked list
template <class t>
class dnode
{
public:
    t data;
    dnode *prev;
    dnode *next;
    dnode(t x)
    {
        data = x;
        prev = next = nullptr;
    }
};
template <class t>
class Mystack
{
private:
    dnode<t> *head;
    dnode<t> *last;

public:
    Mystack()
    {
        last = head = nullptr;
    }
    void push(t p)
    {
        dnode<t> *temp = new dnode<t>(p);
        if (head == nullptr)
        {
            head = last = temp;
        }
        else
        {
            last->next = temp;
            temp->prev = last;
            last = last->next;
        }
    }
    t top()
    {
        if (head == nullptr)
        {
            return nullptr;
        }
        else
        {
            return (last->data);
        }
    }
    void pop()
    {
        if (head == nullptr)
        {
            return;
        }
        if (head == last)
        {
            delete head;
            head = last = nullptr;
        }
        else
        {
            last = last->prev;
            delete last->next;
            last->next = nullptr;
        }
    }
    bool empty()
    {
        if (head == nullptr)
        {
            return true;
        }
        return false;
    }
};