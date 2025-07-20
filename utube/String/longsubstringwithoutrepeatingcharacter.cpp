#include <iostream>
using namespace std;

int main()
{
    string str = "apna college";

    for (char ch : str)
    {
        cout << ch << " ";
    }

    return 0;
}
//
// strings are dynamic in nature

// s.length gives lengt
// s.find(part) finds the position of the private
// s.erase(start,length) removes the part starting from start and of lenth l