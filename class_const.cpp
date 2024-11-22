#include <iostream>
using namespace std;
class Ctest
{
private:
    int age;
    const int height;
public:
    Ctest(const int &a, const int &h);
    ~Ctest();
    void setAge(int);
    void printInfo() const;
};

// Ctest::Ctest(int a, int h)
// {
//     age = a;
//     height = h; // error : can only set value by initiallizer
// }
Ctest::Ctest(const int &a, const int &h)
    :age(a),
    height(h)
{
}

void Ctest::setAge(int a)
{
    age = a;
}

void Ctest::printInfo() const
{
    cout << "I'm " << age << " years old" << endl;
    cout << "I'm " << height << " feats tall" << endl;
}

Ctest::~Ctest()
{
}

int main(int argc, char const *argv[])
{
    Ctest c(1,2);
    c.setAge(3);
    c.printInfo();

    const Ctest c2(1,2);
    // c2.setAge(3); // error
    c2.printInfo();

    cout << "Done" << endl;
    // Ctest *c3 = 0;
    // c3->printInfo();
    return 0;
}
