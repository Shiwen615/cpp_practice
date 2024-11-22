#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a[3]={1,2,3}, *aptr=a;
    cout << endl << aptr;
    cout << endl << aptr+1;
    cout << endl << a;
    cout << endl << a+1;

    aptr = &a[2];
    cout << endl << aptr;
    // a = aptr; // error : array is const prt

    int *const captr = a;
    cout << endl << captr[2];

    return 0;
}
