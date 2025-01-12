In computing, data is any information that can be moved, processed, or stored by a computer.
An object with a name is called a variable.

did you learn the difference between defination and declaration?

#include <iostream>
int main
{
    int a;         // default-initialization (no initializer)

    // Traditional initialization forms:
    int b = 5;     // copy-initialization (initial value after equals sign)
    int c ( 6 );   // direct-initialization (initial value in parenthesis)

    // Modern initialization forms (preferred):
    int d { 7 };   // direct-list-initialization (initial value in braces)
    int e {};      // value-initialization (empty braces)

    int x; //definition of variable x
    std::cout<<"Helo world";
    return 0;
}