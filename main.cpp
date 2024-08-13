#include <iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

} Node;

void printLinkedList(Node *head)
{
    Node *current = head;
    while (current)
    {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int length(Node *head)
{
    Node *current = head;
    int count = 0;

    while (current)
    {
        count++;
        current = current->next;
    }

    cout << "Length of LL is: " << count << endl;

    return count;
}

void addFirst(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        return;
    }

    temp->next = head;
    head = temp;
}

void addLast(Node *&head, int data)
{
    Node *temp = new Node(data);

    if (head == nullptr)
    {
        head = temp;
        return;
    }

    Node *current = head;

    while (current->next != nullptr)
    {
        current = current->next;
    }

    current->next = temp;
}

Node *llFromArray(Node *head, int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        addLast(head, arr[i]);
    }

    return head;
}

void addAfter(Node *&head, int index, int value)
{
    Node *temp = new Node(value);

    Node *current = head;

    while (current != NULL)
    {
        if (current->data == index)
        {
            break;
        }
        current = current->next;
    }

    Node *temp2 = current->next;
    current->next = temp;
    temp->next = temp2;
}

void addBefore(Node *&head, int value, int data)
{
    Node *temp = new Node(data);

    Node *current = head;

    while (current->next->data != value)
    {
        current = current->next;
    }

    Node *temp2 = current->next;
    current->next = temp;
    temp->next = temp2;
}

void deleteNode(Node *&head, int value)
{
    Node *current = head;

    if (head == nullptr)
    {
        return;
    }

    while (current->next != NULL)
    {
        if (current->next->data == value)
        {
            break;
        }
        current = current->next;
    }
    Node *temp = current->next;
    current->next = temp->next;

    delete (temp);
}

void deleteFirst(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    head = head->next;
}

void deleteLast(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = nullptr;
        return;
    }

    Node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }

    delete current->next;
    current->next = nullptr;
}

int main()
{
    Node *head = new Node(10);

    // Print the linked list

    int arr[] = {1, 2, 3, 4};

    head = llFromArray(head, arr, 4);

    addAfter(head, 2, 200);

    deleteNode(head, 200);

    addBefore(head, 4, 34);
    // deleteFirst(head);
    deleteLast(head);
    printLinkedList(head);

    return 0;
}
