#include <iostream>
using namespace std;

class C
{
private:
    int data;
public:
    friend ostream &operator<<(ostream &out, C c);

    C(int d):data(d){};

    C &operator++(){
        ++data;
        return *this;
    }
    C operator++(int){
        C temp = *this;
        ++data;
        return temp;
    }
};

ostream &operator<<(ostream &out, C c){
    out << c.data;
    return out;
}

int main(int argc, char const *argv[])
{
    C ca(10);
    cout << ca << endl;
    cout << ++ca << endl;
    cout << ca++ << endl;
    cout << ca << endl;
    return 0;
}


