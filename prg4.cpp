#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, pos, element, choice;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n1. Insertion";
    cout << "\n2. Deletion";
    cout << "\nEnter your choice: ";
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter position: ";
        cin >> pos;

        cout << "Enter element: ";
        cin >> element;

        for(int i = n; i >= pos; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = element;
        n++;

        cout << "Array after insertion: ";
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    else if(choice == 2)
    {
        cout << "Enter position: ";
        cin >> pos;

        for(int i = pos - 1; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Array after deletion: ";
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}