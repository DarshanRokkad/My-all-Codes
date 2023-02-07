#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertathead(Node **head, int val)
{
    Node *n = new Node(val);
    if ((*head) == NULL)
    {
        n->next = n;
        (*head) = n;
        return;
    }
    Node *temp = *head;
    while (temp->next != (*head))
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = *head;
    *head = n;
}

void inserttail(Node **head, int val)
{
    Node *n = new Node(val);
    if ((*head) == NULL)
    {
        n->next = n;
        (*head) = n;
        return;
    }
    Node *temp = *head;
    while (temp->next != (*head))
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = *head;
}

void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertathead(&head, 1);
    inserttail(&head, 2);
    insertathead(&head, 3);
    inserttail(&head, 4);
    display(head);

    return 0;
}