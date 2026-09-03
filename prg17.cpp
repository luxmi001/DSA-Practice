#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100], transpose[100][100];
    int rows, cols;

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

    // Find transpose
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTranspose of matrix is:\n";

    for(int i = 0; i < cols; i++)
    {
        for(int j = 0; j < rows; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}