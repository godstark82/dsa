#include <iostream>
using namespace std;

#define MAX 50

class Stack
{
private:
    int data[MAX];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int value)
    {
        top++;
        data[top] = value;
    }

    int pop()
    {
        int popValue = data[top];
        top--;
        return popValue;
    }

    int peek()
    {
        if (top == -1)
        {
            cout << "Stack UnderFlow" << endl;
            return -1;
        }
        return data[top];
    }

    bool empty()
    {
        return (top == -1);
    }

    bool full()
    {
        return (top == MAX - 1);
    }
};
int main()
{
    Stack s = Stack();
    s.push(3);
    s.push(2);
    s.pop();
    cout << s.peek();
    return 0;
}