#include <iostream>

int main(int argc, char const *argv[])
{
    int *p = new int(65);
    char *ch = reinterpret_cast<char*>(p);

    std::cout << *ch;

    char *ch2 = new char('B');
    int *p2 = reinterpret_cast<int*>(ch2);
    std::cout << std::endl << *p2;
    return 0;
}
