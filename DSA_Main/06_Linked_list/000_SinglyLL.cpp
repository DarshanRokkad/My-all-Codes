// Singly linked list
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

class singlyLinkedlist
{
private:
    node *head;

public:
    singlyLinkedlist()
    {
        head = nullptr;
    }
    void insert(int x)
    {
        node *temp = new node(x);
        if (head == nullptr)
        {
            head = temp;
        }
        else
        {
            node *p = head;
            while (p->next != nullptr)
            {
                p = p->next;
            }
            p->next = temp;
            dispaly();
        }
    }
    void dispaly()
    {
        if (head == nullptr)
        {
            cout << "Linked list is empty." << endl;
        }
        else
        {
            cout << "Singly linked list." << endl;
            node *p = head;
            while (p)
            {
                cout << p->data ;
                p = p->next;
                if(p)
                    cout<<" <- ";
            }
            cout << endl<< endl;
        }
    }
};

int main()
{
    int a[] = {2, 4, 3, 7, 5};
    int size = sizeof(a) / sizeof(a[0]);
    singlyLinkedlist s;
    for (int i = 0; i < size; i++)
    {
        s.insert(a[i]);
    }


    return 0;
}