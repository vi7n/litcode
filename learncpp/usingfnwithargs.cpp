#include <iostream>

int foo()
{
    std::cout << "Enter a number";
    int z;
    std::cin >> z;
    return z;
}

int doubleg(int x)
{
    return x * 2;
}

// turns out in cpp function with the same identifier but different parameters are treated as two different functions
int doubleg(int x, int y)
{
    return x * 3;
}

int main() // forgot to add the () and also the int at the start
{
    std::cout << "Enter 1 number"; // forgot this semi-colon
    int a{foo()};
    // int b{foo()};
    // int c{foo()};
    // // std::cin >> (foo()) >> (foo()) >> foo(); // wasn't sure of this line but turned out this was correct
    std::cout << "the double of the number you entered is " << doubleg(a);
    std::cout << "the triple of the number you entered is " << doubleg(a, a);
    return 0;
}
