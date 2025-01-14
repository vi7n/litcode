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

int main() // forgot to add the () and also the int at the start
{
    std::cout << "Enter 1 number"; // forgot this semi-colon
    int a{foo()};
    // int b{foo()};
    // int c{foo()};
    // // std::cin >> (foo()) >> (foo()) >> foo(); // wasn't sure of this line but turned out this was correct
    std::cout << "the double of the number you entered is " << doubleg(a);
    return 0;
}
