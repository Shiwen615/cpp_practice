#include <iostream>

int main(int argc, char const *argv[])
{
    const int i = 1;
    const int *p = &i;
    // *p = 2; // error : expression must be a modifiable lvalue
    int i2 = 2;
    int i3 = 3;
    int *const p2 = &i2;
    // p2 = &i3; // error : expression must be a modifiable lvalue
    const int i4 = 4;
    const int *const p3 = &i;
    // p3 = &i4; // error : expression must be a modifiable lvalue
    return 0;
}
