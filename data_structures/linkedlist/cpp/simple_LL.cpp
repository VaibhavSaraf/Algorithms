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

class LinkedList
{
    node *head;

public:
    node *createOneTwoThree()
    {
        node *head, *two, *three;
        head = two = three = NULL;
        head = new node(1);
        two = new node(2);
        three = new node(3);
        head->next = two;
        two->next = three;
        three->next = NULL;
        return head;
    }
    void printlinkedList(node *n)
    {
        while (n != NULL)
        {
            cout << n->data << "->";
            n = n->next;
        }
        cout << endl;
    }
    int lenthOfLinkedList(node *n)
    {
        int l = 0;
        while (n != NULL)
        {
            l++;
            n = n->next;
        }
        return l;
    }
    void wrongPush(node *head, int data)
    {
        node *newNode = NULL;
        newNode = new node(data);
        newNode->next = head;
        head = newNode; // here it is wrong
    }
    /*
        Push() in C++ -- we just add a '&' to the right hand
        side of the head parameter type, and the compiler makes
        that parameter work by reference. So this code changes
        the caller's memory, but no extra uses of '*' are necessary --
        we just access "head" directly, and the compiler makes that
        change reference back to the caller.
    */
    void push(node *&headRef, int data)
    {
        node *newNode = new node(data);
        newNode->next = headRef;
        headRef = newNode;
    }
    void addAtLast(node *head,int data)
    {
        node *p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        node *tail = new node(data);
        p->next = tail;
        tail->next = NULL;
    }
};

int main()
{
    LinkedList l;
    node *head = l.createOneTwoThree();
    cout << "Linked list: ";
    l.printlinkedList(head);
    cout << "Length of Linked List: " << l.lenthOfLinkedList(head) << endl;
    cout << "Linked List after Wrong Push: ";
    l.wrongPush(head, 0);
    l.printlinkedList(head);
    cout << "Linked List after correct Push: ";
    l.push(head, 0);
    l.push(head, 12);
    l.printlinkedList(head);
    cout << "Length of Linked List: " << l.lenthOfLinkedList(head) << endl;
    l.addAtLast(head,16);
    cout<<"Linked List after adding to last: ";
    l.printlinkedList(head);
    cout << "Length of Linked List: " << l.lenthOfLinkedList(head) << endl;
    return 0;
}