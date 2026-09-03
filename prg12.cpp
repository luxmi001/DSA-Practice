#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100], rows, cols;

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

    // Row Major Order
    cout << "\nRow Major Order: ";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    // Column Major Order
    cout << "\nColumn Major Order: ";
    for(int j = 0; j < cols; j++)
    {
        for(int i = 0; i < rows; i++)
        {
            cout << matrix[i][j] << " ";
        }
    }

    return 0;
}