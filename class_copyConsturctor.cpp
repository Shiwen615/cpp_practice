#include <iostream>
using namespace std;

class A
{
private:
    int i;
public:
    A(int x):i(x){
        cout << "default constructor is called" << endl;
    };
    A(A &a):i(a.i){
        cout << "copy constructor is called" << endl;
    };
};

int main(int argc, char const *argv[])
{
    A a = A(1);
    A a2 = a;
    return 0;
}

