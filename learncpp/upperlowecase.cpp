#include <iostream>
using namespace std;

int main()
{
    cout << "enter any letter \n";
    char inpu, a_val('a'), z_val{'z'}, A_val{'A'}, Z_val{'Z'};
    cin >> inpu;

    int mval, aVal, AVal, zVal, ZVal;
    mval = inpu;
    aVal = a_val;
    AVal = A_val;
    zVal = z_val;
    ZVal = Z_val;
    if ((mval >= AVal) && (mval <= ZVal))
    {
        cout << "Uppercase";
    }
    else if ((mval >= aVal) && (mval <= zVal))
    {
        cout << "Lowercase";
    }
    else
    {
        cout << "neither upper nor lowercase";
    }

    return 0;
}