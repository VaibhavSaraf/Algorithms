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

    void removedups(node *&head)
    {
        unordered_map<int,int> umap;
        node *p = head;
        while (p->next != NULL)
        {
            umap[p->data]++;
            p = p->next;
        }
        for(auto x : umap)
            cout<<x.first<<"->";
    }
    void removedups1(node *&head)
    {
        unordered_set <int> s;
        node *p = head;
        while (p->next != NULL)
        {
            s.insert(p->data);
            p = p->next;
        }
        for(auto i = s.begin();i!=s.end();i++)
        {
            cout<<*i<<"->";
        }
    }
};


int main()
{
    OJ;
    node *head = NULL;
    Linkedlist l;
    
    int n;cin>>n;
    l.createList(head,n);
    l.removedups1(head);
    // l.printlist(head);
    return 0;
}