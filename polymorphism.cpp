#include <iostream>
using namespace std;

class Animal
{
private:

public:
    virtual void yell(){ cout << "ah~~~~~" << endl;}
protected:
    void say(){ cout << "hello" << endl;}
};

class Dog : public Animal
{
private:

public:
    virtual void yell() override{ cout << "woof" << endl;}
    void say(){Animal::say();}
};

int main(int argc, char const *argv[])
{
    Animal a;
    a.yell();

    Dog d;
    d.yell();
    d.say();

    Animal *aptr = new Animal();
    aptr->yell();

    Animal *a2ptr = new Dog();
    a2ptr->yell();

    return 0;
}
