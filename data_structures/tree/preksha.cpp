#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define Time srand(chrono::high_resolution_clock::now().time_since_epoch().count());
#define OJ                            \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
class node
{
public:
    node *left;
    node *right;
    int data;
    node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
    node()
    {
        left = right = NULL;
    }
};

class binaryTree
{
public:
    node* create()
    {
        int x;
        cin>>x;
        if(x==-1)
        {
            return NULL;
        }
        node *n = new node (x);
        cout<<"enter left of "<<x<<"\n";
        n->left = create();
        cout<<"enter right of "<<x<<"\n";
        n->right = create();
        return n;
    }
    void inorderTraversal(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        inorderTraversal(root->left);
        cout<<root->data<<"->";
        inorderTraversal(root->right);
    }
    void preorderTraversal(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<"->";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    void postorderTraversal(node *root)
    {
        if(root==NULL)
        {
            return;
        }
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<"->";
    }
    void bft(node *root)
    {
        queue <node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *temp;
            temp = q.front();
            cout<<temp->data<<"->";
            q.pop();
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
    }

};


int main()
{
    binaryTree b;
    cout<<"Enter data for root\n";
    node *root = b.create();
    b.inorderTraversal(root);
    cout<<"\n";
    b.preorderTraversal(root);
    cout<<"\n";
    b.postorderTraversal(root);
    cout<<"\n";
    cout<<"breadth first\n";
    b.bft(root);
    cout<<"\n";

    return 0;
}