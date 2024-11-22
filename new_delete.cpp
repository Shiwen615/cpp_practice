#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *iptr = new int[5];

    iptr[0] = 1;

    for (int i = 0; i < 5; i++)
    {
        cout << iptr[i] << " ";
    }
    cout << endl;
    return 0;
}
