#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "First character: " << str[0] << endl;
    cout << "Last character: " << str[str.length() - 1];

    return 0;
}