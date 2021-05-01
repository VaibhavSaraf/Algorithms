#include <iostream>
#include <math.h>
#include <stack>
using namespace std;
#define ll long long
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout)
class node
{
public:
    int data;
    node *next;
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

class linkedlist
{
public:
    void append(node *&head,int data)
    {
        node *tmp = new node (data);
        
        if(head == NULL)
        {
            head = tmp;
            return;
        }
        node *p = head;
        while (p->next!=NULL)
        {
            p = p->next;
        }
        p -> next = tmp;
    }
    void create(node *&head)
    {
        int n; cin>>n;
        int x;
        while (n--)
        {
            cin>>x;
            append(head,x);
        }
    }
    void print_ll(node *head)
    {
        node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->data << "->";
            tmp = tmp->next;
        }
    }
    void midoflinklist(node *head)
    {
        node *fast = head;
        node *slow = head;
        while (fast!=NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast=fast->next->next;
        }
        cout<<"middle: "<<slow->data;
    }
    ll solution(node* head)
    {
        node *p = head;
        ll count = 0;

        stack <int> s;
        while (p!=NULL)
        {
            s.push(p->data);    
            p = p->next;
        }
        ll i = 0;
        while (!s.empty())
        {
            int x = s.top();
            count = count + x*pow(2,i);
            i++;
            s.pop();
        }
        return count;
    }
};
int main()
{
    OJ;
    linkedlist l;
    node *head=NULL;
    l.create(head);
    l.print_ll(head);
    cout<<"\n";
    cout<<l.solution(head);
    return 0;
}