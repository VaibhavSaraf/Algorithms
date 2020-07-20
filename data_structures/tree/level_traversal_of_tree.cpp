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
    int data;
    node *left;
    node *right;
    node(int x)
    {
        this->data = x;
        this->left = this->right = NULL;
    }
    node()
    {
        this->left = this->right = NULL;
    }
};
class binaryTree
{
public:
    node *create()
    {
        int x;
        cin >> x;
        if (x == -1)
        {
            return NULL;
        }
        node *t = new node(x);
        cout << "Enter left of " << x << ":\n";
        t->left = create();
        cout << "Enter right of " << x << ":\n";
        t->right = create();
        return t;
    }
    void preorderTraversal(node *tmp)
    {
        if(tmp==NULL)
        {
            return;
        }
        cout<<tmp->data<<"->";
        preorderTraversal(tmp->left);
        preorderTraversal(tmp->right);
    }
    void Levelorder(node *root)
    {
        queue <node *> q;
        q.push(root);
        vector <int> v;
        while (!q.empty())
        {
            node *n = q.front();
            cout<<n->data<<"->";
            // v.push_back(n->data);
            q.pop();
            if(n->left!=NULL)
                q.push(n->left);
            if(n->right!=NULL)
                q.push(n->right);
        }
    }
};
int main()
{
    binaryTree b;
    node *root;
    cout << "Enter value of root else -1 for NULL\n";
    root = b.create();
    b.preorderTraversal(root);
    cout<<"\nLevel Order:\n";
    b.Levelorder(root);
    return 0;
}