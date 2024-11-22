#include <iostream>

int main(int argc, char const *argv[])
{
    int a=5, *aptr = &a;
    std::cout << std::endl << &*aptr;
    std::cout << std::endl << *&aptr;
    std::cout << std::endl << *&a;
    return 0;
}
