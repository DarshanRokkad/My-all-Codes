/*
Design a menu driven Program in C++ for the following operations on Singly
Linked List of Student Data with the fields: USN, Name, Branch, Sem, PhNo.
Perform the following operations on the linked list.
a. Insert a student at the front of the list.
b. Delete a node with specified student name.
c. Display the list and count the number of nodes in it.
*/
#include <iostream>
#include <string>
using namespace std;

class node
{
public:
    string usn, name, branch;
    int sem, phone_number;
    node *next;
    node(string u, string n, string b, int s, int p)
    {
        usn = u;
        name = n;
        branch = b;
        sem = s;
        phone_number = p;
        next = nullptr;
    }
};

class student
{
private:
    node *head;
    node *last;

public:
    student()
    {
        last = head = nullptr;
        while (1)
        {
            menu();
        }
    }
    void menu()
    {
        cout << endl;
        cout << "** Menu **" << endl;
        cout << "1. Insert an student at front of the list ." << endl;
        cout << "2. Delete an student with specified name ." << endl;
        cout << "3. Display the linked list ." << endl;
        cout << "4. Exit ." << endl;
        cout << "Enter the choice : ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            insert_student();
            break;
        case 2:
            delete_student();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice." << endl;
        }
    }
    void insert_student()
    {
        string usn, name, branch;
        int sem, phone_number;
        cout << "Enter the student details: " << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Usn : ";
        cin >> usn;
        cout << "Branch : ";
        cin >> branch;
        cout << "Semester : ";
        cin >> sem;
        cout << "Phone number : ";
        cin >> phone_number;
        node *temp = new node(usn, name, branch, sem, phone_number);
        if (head == nullptr)
        {
            last = head = temp;
        }
        else
        {
            last->next = temp;
            last = temp;
        }
        cout << "Student is inserted successfully." << endl;
        display();
    }
    void delete_student()
    {
        if (head == nullptr)
        {
            cout << "There is no student in the list." << endl;
            cout << "Underflow condition." << endl;
        }
        else
        {
            cout << "Enter the name of the student that has to be deleted: ";
            string n;
            cin >> n;
            node *temp = head;
            node *tail = nullptr;
            // if the student to be delted is the first one then below
            if (head->name == n)
            {
                cout << "Student " << n << " is deleted successfully." << endl;
                head = head->next;
                delete temp;
            }
            else
            {
                while (!(temp->name).compare(n))
                {
                    tail = temp;
                    temp = temp->next;
                    if (temp == nullptr)
                        break;
                }
                // if student is found then the below if condition will executes
                if (temp != nullptr)
                {
                    tail->next = temp->next;
                    delete temp;
                    temp = head;
                    // now we have to set the last node pointer
                    while (temp->next == nullptr)
                    {
                        temp = temp->next;
                    }
                    last = temp;
                    cout << "Student " << n << " is deleted successfully." << endl;
                }
                // if student is not found
                else
                {
                    cout << "There is no student with name " << n << " in the list." << endl;
                }
            }
            display();
        }
    }
    void display()
    {
        if (head == nullptr)
        {
            cout << "No student is present in the list . " << endl;
        }
        else
        {
            int c = 0;
            cout << "**Linked list**" << endl;
            node *temp = head;
            while (temp)
            {
                cout << "Student " << temp->name;
                c++;
                temp = temp->next;
                if (temp)
                    cout << " <-- ";
            }
            cout << endl;
            cout << "There are total " << c << " students in the linked list." << endl;
        }
    }
};

int main()
{
    cout << "** Student Linked list **" << endl;
    student s;

    return 0;
}