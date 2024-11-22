#include <iostream>
using namespace std;

class A
{
friend void printI(const A &a);
private:
    int i;
public:
    A(const int &x):i(x){};
};

void printI(const A &a){
    cout << a.i << endl;}

int main(int argc, char const *argv[])
{
    A a = A(1);
    printI(a);
    return 0;
}
