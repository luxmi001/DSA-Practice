#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int flag = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    int n = str.length();

    for(int i = 0; i < n / 2; i++)
    {
        if(str[i] != str[n - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout << "String is palindrome.";
    }
    else
    {
        cout << "String is not palindrome.";
    }

    return 0;
}