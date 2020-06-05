#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

void printlinkedList(node *n)
{
     while (n!=NULL)
     {
         cout<<n->data<<" ";
         n = n->next;
     }
     
}


int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    

    head = new node(1);
    second = new node(2);
    third = new node(3);

    head->next=second;
    
    second->next=third;
    
    third->next=NULL;
    
    printlinkedList(head);
    return 0;
}