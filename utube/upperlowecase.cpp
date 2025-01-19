#include <iostream>
using namespace std;

int main()
{
    cout << "enter any letter \n";
    char inpu;
    cin >> inpu;

    if (inpu >= 'A' && inpu <= 'Z')
    {
        cout << "Uppercase";
    }
    else if (inpu >= 'a' && inpu <= 'z')
    {
        cout << "Lowercase";
    }
    else
    {
        cout << "neither upper nor lowercase";
    }

    return 0;
}