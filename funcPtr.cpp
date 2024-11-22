#include <iostream>

void hello(const char *);

int main(int argc, char const *argv[])
{
    // hello("Ray");
    void (*fp)(const char *) = hello;
    // auto fp = hello;
    (*fp)("Ray");

    void (*fp_arr[])(const char *) = {hello, hello};
    (*fp_arr[0])("One");
    return 0;
}

void hello(const char *string)
{
    std::cout << "hello : " << string << std::endl;
}
