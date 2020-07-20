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
    int x;
    node *l;
    node *r;
    node(int x)
    {
        this->x = x;
        l = r = NULL;
    }
    node()
    {
        l = r = NULL;
    }
};

class binaryTree
{
public:
    node *root;
    binaryTree()
    {
        this->root = NULL;
    }
    node* create()
    {
        node *n;
        // cout<<"Enter data else -1 for NULL: "<<"\n";
        int x; cin>>x;
        if(x==-1) return NULL;
        n = new node(x);
        cout<<"Enter left of "<<x<<" else -1 for NULL"<<"\n";
        n->l = create();
        cout<<"Enter right of "<<x<<" else -1 for NULL"<<"\n";
        n->r = create();
        return n;
    }
    void preorderTraversal(node *tmp)
    {
        if(tmp==NULL)
        {
            return;
        }
        cout<<tmp->x<<"->";
        preorderTraversal(tmp->l);
        preorderTraversal(tmp->r);
    }
    void inorderTraversal(node *tmp)
    {
        if(tmp==NULL)
        {
            return;
        }
        inorderTraversal(tmp->l);
        cout<<tmp->x<<"->";
        inorderTraversal(tmp->r);
    }
    void postorderTraversal(node *tmp)
    {
        if(tmp==NULL)
        {
            return;
        }
        postorderTraversal(tmp->l);
        postorderTraversal(tmp->r);
        cout<<tmp->x<<"->";
    }
};

int main()
{
    // OJ
    cout<<"hello tree's"<<"\n";
    binaryTree b;
    cout<<"Enter value for node:\n";
    node *root = b.create();
    cout<<"Preorder Traversal"<<"\n";
    b.preorderTraversal(root);
    cout<<"\nInorder Traversal"<<"\n";
    b.inorderTraversal(root);
    cout<<"\nPostorder Traversal"<<"\n";
    b.postorderTraversal(root);
    return 0;
}