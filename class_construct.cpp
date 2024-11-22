#include <iostream>
using namespace std;
class Ctest
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Ctest(int h, int m, int s);
    ~Ctest();
    void setTime(int h, int m, int s);
    void printTime();
};

Ctest::Ctest(int h=0, int m=0, int s=0)
{
    setTime(h, m, s);
    cout << "Construct ";
    printTime();
}

Ctest::~Ctest()
{
    cout << "Destruct ";
    printTime();

}

void Ctest::setTime(int h, int m, int s)
{
    hours = h;
    minutes = m;
    seconds = s;
}

void Ctest::printTime()
{
    cout << " " << hours << " : " << minutes << " : " << seconds << endl;
}

void create();

int main(int argc, char const *argv[])
{
    Ctest c1(1);
    Ctest *c2 = new Ctest(2);
    delete c2;
    Ctest(3);
    create();
    return 0;
}

void create()
{
    Ctest c4(4);
    Ctest *c5 = new Ctest(5);
}
