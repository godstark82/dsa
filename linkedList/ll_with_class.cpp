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

public:
    Node *head;
    LinkedList(int data)
    {
        Node *newNode = new Node(data);
        this->head = newNode;
    }

    //! From Array
    void convertArrayToLL(int *arr, int n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            insertFirst(arr[i]);
        }
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
        if (head == nullptr)
        {
            return;
        }

        Node *current = head;

        while (current != nullptr && current->data != after)
        {
            current = current->next;
        }

        if (current == nullptr)
        {
            return;
        }

        Node *temp = new Node(data);

        temp->next = current->next;
        current->next = temp;
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
        Node *current = head;

        while (current->next->next != nullptr)
        {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
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

    //! Related To Sorting
    void swap(int a, int b)
    {
        if (a == b)
            return;

        Node *prevX = nullptr, *prevY = nullptr;
        Node *currX = head, *currY = head;

        //! Finding the X Node
        while (currX != nullptr && currX->data != a)
        {
            prevX = currX;
            currX = currX->next;
        }

        //! Finding the Y Node
        while (currY != nullptr && currY->data != b)
        {
            prevY = currY;
            currY = currY->next;
        }

        if (currX == nullptr || currY == nullptr)
            return;

        //! if X is not the head
        if (prevX != nullptr)
        {
            prevX->next = currY;
        }
        else
        {
            head = currY;
        }

        //! If Y is not the head
        if (prevY != nullptr)
        {
            prevY->next = currX;
        }
        else
        {
            head = currX;
        }

        //! Swap the Nodes
        Node *temp = currX->next;
        currX->next = currY->next;
        currY->next = temp;
    }
};

int main()
{
    LinkedList ll = LinkedList(1);
    int arr[] = {4, 3, 5, 2, 7, 1};

    ll.convertArrayToLL(arr, 5);

    ll.print();

    ll.swap(4,1);

    cout << "The length of LinkedList is : " << ll.length() << endl;
    ll.print();
    return 0;
}