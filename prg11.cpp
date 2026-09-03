#include <iostream>
using namespace std;

bool isRotatedSorted(int arr[], int n)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > arr[(i + 1) % n])
        {
            count++;
        }
    }

    return count <= 1;
}

int main()
{
    int arr[100], n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if(isRotatedSorted(arr, n))
    {
        cout << "Array is rotated sorted.";
    }
    else
    {
        cout << "Array is not rotated sorted.";
    }

    return 0;
}