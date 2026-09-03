#include <iostream>
using namespace std;

int main()
{
    int arr[100], cube[100], n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find cube and store in another array
    for(int i = 0; i < n; i++)
    {
        cube[i] = arr[i] * arr[i] * arr[i];
    }

    cout << "Cube of each element is: ";
    for(int i = 0; i < n; i++)
    {
        cout << cube[i] << " ";
    }

    return 0;
}