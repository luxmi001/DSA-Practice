#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, choice, element, key;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\n1. Insert at End";
    cout << "\n2. Insert at Beginning";
    cout << "\n3. Insert after Specific Key";
    cout << "\nEnter your choice: ";
    cin >> choice;

    cout << "Enter element to insert: ";
    cin >> element;

    if(choice == 1)
    {
        // Insert at end
        arr[n] = element;
        n++;
    }
    else if(choice == 2)
    {
        // Insert at beginning
        for(int i = n; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[0] = element;
        n++;
    }
    else if(choice == 3)
    {
        // Insert after specific key
        cout << "Enter key: ";
        cin >> key;

        int pos = -1;

        for(int i = 0; i < n; i++)
        {
            if(arr[i] == key)
            {
                pos = i;
                break;
            }
        }

        if(pos == -1)
        {
            cout << "Key not found.";
            return 0;
        }

        for(int i = n; i > pos + 1; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[pos + 1] = element;
        n++;
    }
    else
    {
        cout << "Invalid choice.";
        return 0;
    }

    cout << "Array after insertion: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}