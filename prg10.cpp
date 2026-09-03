#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, k, choice;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number of steps: ";
    cin >> k;

    cout << "Enter 1 for Left Rotation";
    cout << "\nEnter 2 for Right Rotation";
    cout << "\nEnter your choice: ";
    cin >> choice;

    k = k % n;

    if(choice == 1)
    {
        // Left rotation
        for(int step = 1; step <= k; step++)
        {
            int temp = arr[0];

            for(int i = 0; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }

            arr[n - 1] = temp;
        }
    }
    else if(choice == 2)
    {
        // Right rotation
        for(int step = 1; step <= k; step++)
        {
            int temp = arr[n - 1];

            for(int i = n - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }

            arr[0] = temp;
        }
    }
    else
    {
        cout << "Invalid choice!";
        return 0;
    }

    cout << "Array after rotation: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}