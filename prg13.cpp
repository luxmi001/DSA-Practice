#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100], rows, cols, sum = 0;

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
            sum = sum + matrix[i][j];
        }
    }

    cout << "Sum of all elements of matrix = " << sum;

    return 0;
}