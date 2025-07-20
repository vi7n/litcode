#include <iostream>
using namespace std;

int main()
{
    int i{1}, n{4}, k;

    for (i; i <= n; i++)
    {
        for (int j{n - i}; j != 0; j--)
        {
            cout << " ";
        }

        for (int k{1}; k <= i; k++)
        {
            cout << k;
        }
        for (int l{i - 1}; l >= 1; l--)
        {
            cout << l;
        }
        cout << "\n";
    }

    return 0;
}