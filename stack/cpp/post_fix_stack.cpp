#include <bits/stdc++.h>
using namespace std;

unordered_map<string, int> operatorPrecedence = {
    {"+", 1},
    {"-", 1},
    {"*", 2},
    {"/", 2},
};

bool isOperator(char c)
{

    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int main()
{
    stack<string> s;

    //! a + 5 - b +

    string exp = "a + b - c +";

    char finalOutput[exp.size()];

    for (int i = 0; i < exp.size(); i++)
    {
        if (exp[i] == ' ')
            continue;

        if (isOperator(exp[i]))
        {

            string op1 = s.top();
        }

        return 0;
    }