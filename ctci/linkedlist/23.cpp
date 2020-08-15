/*  Delete middle node (not necessarily exact middle node) 
    1->2->3->4->5->
    if we want to delete 4 then linkedlist is 
    1->2->3->5->
*/
#include<bits/stdc++.h>
#define deb(x) cout << #x << "=" << x << endl
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
    node()
    {
        next = NULL;
    }
};

class Linkedlist
{
public:
    void appendl(node *&n, int data)
    {
        if (n==NULL)
        {
            node *t = new node(data);
            n = t;
            return;
        }
        node *p = n;
        while (p->next!=NULL)
        {
            p = p->next;
        }
        node *t = new node(data);
        p->next = t;
        t->next = NULL;
    }
    void createList(node *&head, int n)
    {
        while (n--)
        {
            int data;cin>>data;
            appendl(head, data);
        }
    }
    void printlist(node *head)
    {
        node *p = head;
        while (p!=NULL)
        {
            cout<<p->data<<"->";
            p = p->next;
        }
    }

    void deleten(node *&head,int k)
    {
        if(k==head->data)
        {
            node *tmp = head;
            head = tmp->next;
            delete tmp;
            return;
        }
        node *p = head;
        while (true)
        {
            if(p->next->data!=k)
                p=p->next;
            else
            {
                break;
            }
        }
        // if(p->next==NULL) return;
        node *tmp = p->next;
        p->next = tmp->next;
        delete tmp;
    }
    void deleten2(node *&head,int k)
    {
        if(k==head->data)
        {
            node *tmp = head;
            head = tmp->next;
            delete tmp;
            return;
        }
        node *p = head;
        while (true)
        {
            if(p->data!=k)
                p=p->next;
            else
            {
                break;
            }
        }
        p->data = p->next->data;
        p->next = p->next->next;
    }
};


int main()
{
    OJ;
    node *head = NULL;
    Linkedlist l;

    int n;cin>>n;
    l.createList(head, n);
    l.printlist(head);
    cout<<endl;
    l.deleten2(head,3);
    // l.deleten(head,9);
    l.printlist(head);
    return 0;
}