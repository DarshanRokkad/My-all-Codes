#include <iostream>
using namespace std;

class Producer_and_Consumer
{
private:
    int size;
    int *buffer;
    int front;
    int rear;
    int count = 1;

public:
    Producer_and_Consumer()
    {
        cout << "Enter the size of the buffer : ";
        cin >> size;
        buffer = new int[size];
        front = -1;
        rear = -1;
        while (true)
        {
            menu();
        }
    }

    void display_buffer()
    {
        cout << "-----------------------" << endl;
        if (front == -1)
        {
            cout << "Buffer is empty." << endl;
        }
        else
        {
            cout << "Buffer : " << endl;
            int f = front, r = (rear + 1) % size;
            do
            {
                cout << "Item " << buffer[f] << " is at index " << f << endl;
                f = (f + 1) % size;
            } while (f != r);
            if ((rear + 1) % size == front)
            {
                cout << "Buffer is full." << endl;
            }
        }
        cout << "-----------------------" << endl;
    }

    void produce()
    {
        if ((rear + 1) % size == front)
        {
            cout << "Buffer is full." << endl;
        }
        else
        {
            if (front == -1)
            {
                front = 0;
            }
            rear = (rear + 1) % size;
            buffer[rear] = count;
            cout << "Item " << buffer[rear] << " is produced and inserted into buffer." << endl;
            count++;
            display_buffer();
        }
    }

    void consume()
    {
        if (front == -1)
        {
            cout << "Buffer is empty." << endl;
        }
        else
        {
            cout << "Item " << buffer[front] << " is consumed and removed from buffer." << endl;
            front = (front + 1) % size;
            if ((rear + 1) % size == front)
            {
                front = -1;
            }
            display_buffer();
        }
    }

    void menu()
    {
        cout << endl;
        cout << "Enter 1 to Produce." << endl;
        cout << "Enter 2 to Consume." << endl;
        cout << "Enter 3 to display buffer." << endl;
        cout << "Enter 4 to exit." << endl;
        cout << "Enter your choice : ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
            produce();
            break;
        case 2:
            consume();
            break;
        case 3:
            display_buffer();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Enter valid choice.";
            menu();
        }
    }
};

int main()
{
    cout << "----- Producer and consumer model -----" << endl;
    Producer_and_Consumer obj;

    return 0;
}