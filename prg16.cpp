#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100], rows, cols, key;
    int found = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "Enter matrix elements: ";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(matrix[i][j] == key)
            {
                cout << "Element found at row " << i + 1
                     << " and column " << j + 1;
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            break;
        }
    }

    if(found == 0)
    {
        cout << "Element not found.";
    }

    return 0;
}