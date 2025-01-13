#include <iostream>

int main() // forgot to add the () and also the int at the start
{
    std::cout << "Enter 3 numbers seperated by blank space"; // forgot this semi-colon
    int a{};
    int b{};
    int c{};
    std::cin >> a >> b >> c; // wasn't sure of this line but turned out this was correct
    std::cout << "the number you entered are " << a << ", " << b << " and " << c;
    return 0;
}

// on second trial I pressed enter after inputing each number yet it worked

// function wala code:

#include <iostream>

// int foo()
// {
//     std::cout << "Enter a number";
//     int z;
//     std::cin >> z;
//     return z;
// }

// int main() // forgot to add the () and also the int at the start
// {
//     // std::cout << "Enter 3 numbers seperated by blank space"; // forgot this semi-colon
//     int a{foo()};
//     int b{foo()};
//     int c{foo()};
//     // std::cin >> (foo()) >> (foo()) >> foo(); // wasn't sure of this line but turned out this was correct
//     std::cout << "the number you entered are " << a << ", " << b << " and " << c;
//     return 0;
// }

// on second trial I pressed enter after inputing each number yet it worked