// Selection sort using template class
#include <iostream>
using namespace std;

template <class t>
class selection_sort
{
private:
    t *arr;
    int n;

public:
    selection_sort()
    {
        cout << "Enter the number of elements of the array : ";
        cin >> n;
        cout << "Enter the elements of the array : ";
        arr = new t[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Before sorting : ";
        display();

        s_sort();

        cout << "After sorting : ";
        display();
    }

    void swap(t *a, t *b)
    {
        t temp = *a;
        *a = *b;
        *b = temp;
    }

    void s_sort()
    {
        for (int i = 0; i < n; i++)
        {
            int min = i;
            for (int j = i + 1; j < n; j++)
            {
                if (arr[min] > arr[j])
                {
                    min = j;
                }
            }
            if (i != min)
            {
                swap(&arr[i], &arr[min]);
            }
        }
    }

    void display()
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    selection_sort<int> s;
    selection_sort<float> f;

    return 0;
}