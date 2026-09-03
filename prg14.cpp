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

    // Calculate sum of each row
    for(int i = 0; i < rows; i++)
    {
        int sum = 0;

        for(int j = 0; j < cols; j++)
        {
            sum = sum + matrix[i][j];
        }

        cout << "Sum of row " << i + 1 << " = " << sum << endl;
    }

    return 0;
}