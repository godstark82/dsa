#include <iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;

    node(int value)
    {
        data = value;
        next = nullptr;
    }
} Node;

typedef struct stack
{
    Node *top;

    stack()
    {
        top = nullptr;
    }
} Stack;

void push(Stack *s, int value)
{
    Node *newNode = new Node(value);
    newNode->next = s->top;
    s->top = newNode;
}

int pop(Stack *s)
{
    if (s->top == nullptr)
    {
        cout << "Stack is Already Empty " << endl;
        return -1;
    }
    Node *temp = s->top;
    int poppedValue = temp->data;
    s->top = s->top->next;
    delete temp;
    return poppedValue;
}

int peek(Stack *s)
{
    return s->top->data;
}

bool isEmpty(Stack *s)
{
    return (s->top == NULL);
}

bool isNotEmpty(Stack *s)
{
    return (!isEmpty(s));
}

void printStack(Stack *s)
{
    Node *current = s->top;
    if (current == nullptr)
    {
        cout << "Stack is empty." << endl;
        return;
    }

    cout << "Stack elements: ";
    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main()
{
    Stack *s = new Stack;

    printStack(s);

    return 0;
}
