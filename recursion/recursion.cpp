#include <iostream>

using namespace std;

void printName(int x)
{
    if (x == 1)
    {
        cout << x << endl;
        return;
    }
    cout << x << endl;
    return printName(x - 1);
}


int main()
{
    printName(5);
    return 0;
}
