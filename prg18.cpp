#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "String is: " << str << endl;
    cout << "Length of string is: " << str.length();

    return 0;
}