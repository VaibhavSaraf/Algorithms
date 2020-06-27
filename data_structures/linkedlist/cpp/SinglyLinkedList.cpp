#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList
{
public:
    void createsinglyLinkedListNode(node *&head,node *&tail)
    {
        if (head == NULL)
        {
            int data;
            cout << "Value of Node: ";
            cin >> data;
            node *n = new node(data);
            head = n;
            tail = n;
            n->next=NULL;
        }
        else
        {
            cout << "Node already exist"
                 << "\n";
        }
    }
};

int main()
{
    node *head = NULL;
    node *tail = NULL;
    SinglyLinkedList l;
    l.createsinglyLinkedListNode(head,tail);
    cout<<head->data<<endl;
    return 0;
}