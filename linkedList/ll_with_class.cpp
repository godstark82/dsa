#include <iostream>

using namespace std;

typedef struct node
{
    int data;
    struct node *next;

    node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }

} Node;

class LinkedList
{
    Node *head;

public:
    LinkedList(Node *head)
    {
        this->head = head;
        this->head->next = nullptr;
    }

    //! Insertion
    void insertFirst(int data)
    {
        Node *temp = new Node(data);

        if (head == nullptr)
        {
            head = temp;
            return;
        }

        temp->next = head;
        head = temp;
    }
    void insertLast(int data)
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
    void insertAfter(int data, int after)
    {
        auto current = head;

        if (head == nullptr)
        {
            return;
        }

        auto temp = new Node(data);

        while (current->next != nullptr)
        {
            if (current->next->data == after)
            {
                break;
            }
        }
        auto temp2 = current->next->next;
        current->next = temp;
        temp->next = temp2;
    }
    //! Delete
    void remove(int data)
    {
        if (head->data == data && head->next != nullptr)
        {
            delete head;
            head = head->next;
        }

        Node *current = head;
        while (current != nullptr)
        {
            if (current->next->data == data)
            {
                break;
            }
            current = current->next;
        }
        Node *temp = current->next->next;
        delete current->next;
        current->next = temp;
    }
    void removeFirst()
    {
        if (head == nullptr)
        {
            return;
        }
        auto temp = head->next;
        delete head;
        head = temp;
    }
    void removeLast()
    {

        if (head == nullptr)
        {
            return;
        }
        auto current = head;

        while (current->next != nullptr)
        {
            current = current->next;
        }
        delete current;
        current = nullptr;
    }
    //! Others
    void print()
    {
        Node *current = head;

        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }

    int length()
    {
        int count = 0;
        Node *current = head;
        while (current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main()
{
    Node *headNode = new Node(1);
    LinkedList ll = LinkedList(headNode);
    ll.insertFirst(0);
    ll.insertLast(5);

    ll.remove(0);

    cout << "The length of LinkedList is : " << ll.length() << endl;
    ll.print();
    return 0;
}