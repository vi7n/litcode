#include <iostream>
using namespace std;

int main()
{
    int n{4}; // number of lines in the pattern
    char A = 'A';
    for (int i{0}; i < 4; i++)
    {
        for (int j{0}; j <= i; j++)
        {
            cout << A;
            A = ++A;
        }
        cout << '\n';
    }

    return 0;
}