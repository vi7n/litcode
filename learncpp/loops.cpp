#include <iostream>

int main()
{
    int i{1};
    // for (i; i <= 10; i++)
    // {
    //     std::cout << "printing: " << i << std ::endl;
    // }
    // return 0;

    // while (i < 10)
    // {
    //     std::cout << "print: " << i << std::endl;
    //     i++;
    // }

    do
    {
        std::cout << "print: " << i << std::endl;
        i++;
    } while (i <= 10);
}