#include <iostream>
using namespace std;
class C
{
private:
    int data;
public:
    C(int d);
    operator double() {
        return static_cast<double>(this->data);
    }
    void print();
};

C::C(int d):data(d){}

void C::print()
{
    cout << "data : " << data << endl;
}

int main(int argc, char const *argv[])
{
    C ca(10);
    cout << ca << endl;
    ca.print();
    cout << ca+0.1 <<endl;
    double d = ca;
    cout << d << endl;
    return 0;
}
