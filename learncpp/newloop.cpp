// #include <iostream>

// #define PRINT_JOE

// int main()
// {
// #ifdef PRINT_JOE
//     std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
// #endif

// #ifdef PRINT_BOB
//     std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
// #endif

//     return 0;
// }

// #include <iostream>

// int main()
// {
// #ifndef PRINT_BOB
//     std::cout << "Bob\n";
// #endif

//     return 0;
// }

#include <iostream>

void foo()
{
#define MY_NAME "Alex"
}

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}