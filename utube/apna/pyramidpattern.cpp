#include <iostream>
using namespace std;

int main()
{
    int n{7}; // number of lines in the pattern
    int k{1};
    for (int i{n}; i > 0; i--)
    {
        for (int j{1}; j <= i; j++)
        {
            if (j < i)
            {
                cout << ' ';
            }
            else
            {
                int m{1};
                for (int l{1}; l <= ((2 * k) - 1); l++)
                {
                    cout << m;
                    if (l < k)
                    {
                        m = ++m;
                    }
                    else
                    {
                        m = --m;
                    }
                }
                k = ++k;
            }
        }
        cout << '\n';
    }

    return 0;
}