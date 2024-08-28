#include <iostream>

using namespace std;

#define MAX 10

typedef struct stack
{
    int data[MAX];
    int top;

} Stack;

int peek(Stack *s)
{
    return (s->data[s->top]);
}

void push(Stack *s, int value)
{
    if (s == nullptr)
    {
        cout << "Stack is NULL" << endl;
        return;
    }
    if (s->top == MAX - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    s->top++;
    s->data[s->top] = value;
}

void printStack(Stack *s)
{
    int topIndex = s->top;

    if (topIndex == -1)
    {
        cout << "Stack Underflow" << endl;
        return;
    }

    cout << "TOP" << endl;

    for (int i = topIndex; i >= 0; i--)
    {
        cout << s->data[i] << endl;
    }

    cout << "BOTTOM" << endl;
}

int pop(Stack *s)
{
    if (s == NULL)
    {
        cout << "NULL STACK";
        return -1;
    }
    if (s->top == -1)
    {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    int temp = s->data[s->top];
    s->top--;
    return temp;
}

bool isEmpty(Stack *s)
{
    return (s->top == -1);
}

bool isNotEmpty(Stack *s)
{
    return (!isEmpty(s));
}

bool isFull(Stack *s)
{
    return (s->top == MAX - 1);
}

int main()
{
    Stack *s = new Stack;
    s->top = -1;

    printStack(s);

    push(s, 1);
    push(s, 2);
    push(s, 3);
    push(s, 4);
    pop(s);
    pop(s);

    cout << "The Peek element is : " << peek(s) << endl;

    printStack(s);

    return 0;
}