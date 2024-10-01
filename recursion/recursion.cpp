#include <bits/stdc++.h>
using namespace std;

void operation1(int n)
{
    if (n == 0)
        return;
    cout << "Hello" << endl;
    operation1(n - 1);
}

void operation2(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    operation2(n - 1);
}

void operation3(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    operation3(i + 1, n);
}

void operation4(int i, int sum, int n)
{
    if (i > n)
    {
        cout << sum << endl;
        return;
    }
    sum = sum + i;
    operation4(i + 1, sum, n);
}

//! Factorial
int operation5(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * (operation5(n - 1));
}

int main()
{
    cout << operation5(4);
    return 0;
}