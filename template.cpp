#include <iostream>

using namespace std;

template< typename T >
T print(T a)
{
    cout << a << endl;
    return a;
}

int main(int argc, char const *argv[])
{
    cout <<print(1) << endl;
    cout <<print(1.0) << endl;
    cout <<print("hello") << endl;
    return 0;
}
