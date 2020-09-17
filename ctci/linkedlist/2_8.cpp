#include <bits/stdc++.h>
using namespace std;
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
class node
{
public:
    char c;
    node *next;
    node(char x = '\0') : c{x}, next{NULL} {}
};

class LinkedList
{
    node *head = NULL;
    node *tail;

public:
    LinkedList() : head{NULL}, tail{NULL} {}

    void addNode(char c)
    {
        node *t = new node(c);
        if (head == NULL)
        {
            head = t;
            tail = t;
        }
        else
        {
            tail->next = t;
            tail = tail->next;
        }
    }
    void print()
    {
        node *p = head;
        while (p != NULL)
        {
            cout << p->c << "->";
            p = p->next;
        }
        cout << endl;
    }
    void detectLoop()
    {
        set <char> st;
        node *p = head;
        while(p!=NULL)
        {
            if(st.find(p->c)==st.end())
            {
                st.insert(p->c);
            }
            else
            {
                cout<<"loop detected at "<<p->c<<".\n";
                return;
            }
            p = p->next;
        }
    }
};

int main()
{
    OJ;
    int n;
    LinkedList l;
    cin >> n;
    char x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        l.addNode(x);
    }
    l.print();
    l.detectLoop();
    return 0;
}