#include <iostream>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

class node
{
public:
    node *next;
    int data;
    node(int a) : data{a}, next{NULL} {}
    node() { next = NULL; }
};

class LinkedList
{
    node *head;
    node *tail;

public:
    LinkedList() : head{NULL}, tail{NULL} {}
    void add_Node(int d)
    {
        node *tmp = new node(d);

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void printList()
    {
        node *p = head;
        while (p != NULL)
        {
            cout << p->data << "->";
            p = p->next;
        }
        cout << "\n";
    }

    void fun(node *p)
    {
        if(p==NULL)
        {
            return;
        }
        else
        {
            cout<<p->data<<"->";
            fun(p->next);
        } 
    }

    void fun1()
    {
        fun(head);
    }

    void reverse_List()
    {
    }
    operator == ()
    {

    }
};

int main()
{
    OJ;
    int n1;
    LinkedList l1;
    cin >> n1;
    for (int i = 0; i < n1; i++)
    {
        int k;
        cin >> k;
        l1.add_Node(k);
    }
    l1.fun1();
    LinkedList l2 = l1;
    
    l2.printList();
    

    return 0;
}