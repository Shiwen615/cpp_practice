#include <iostream>

int F(int n) {
    if(n <= 1) return 1;
    return n * F(n-1);
}

int main(int argc, char const *argv[])
{
    std::cout << F(5);
    return 0;
}
