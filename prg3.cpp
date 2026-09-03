#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, sum = 0;
    float average;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    average = (float)sum / n;

    cout << "Average = " << average << endl;

    cout << "Elements greater than average are: ";

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > average)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}