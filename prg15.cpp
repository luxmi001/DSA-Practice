#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100], n;
    int primarySum = 0, secondarySum = 0;

    cout << "Enter the size of matrix: ";
    cin >> n;

    cout << "Enter the matrix elements: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Calculate diagonal sums
    for(int i = 0; i < n; i++)
    {
        primarySum = primarySum + matrix[i][i];
        secondarySum = secondarySum + matrix[i][n - i - 1];
    }

    cout << "Primary diagonal sum = " << primarySum << endl;
    cout << "Secondary diagonal sum = " << secondarySum << endl;

    // Compare the sums
    if(primarySum > secondarySum)
    {
        cout << "Primary diagonal has larger sum = " << primarySum;
    }
    else if(secondarySum > primarySum)
    {
        cout << "Secondary diagonal has larger sum = " << secondarySum;
    }
    else
    {
        cout << "Both diagonal sums are equal = " << primarySum;
    }

    return 0;
}