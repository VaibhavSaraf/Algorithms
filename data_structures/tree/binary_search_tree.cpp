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
    node *left, *right;
    node(int data)
    {
        this->data = data;
        this->left = this->right = NULL;
    }
    node()
    {
        this->left = this->right = NULL;
    }
};

class bst
{
public:
    node *create(node *root)
    {
        int x;
        cin >> x;
        while (x != -1)
        {
            root = insert(root, x);
        }
        return root;
    }
    node *insert(node *tmp, int value)
    {
        if (tmp == NULL)
            tmp = new node(value);

        else if (value < tmp->data)
            tmp->left = insert(tmp->left, value);

        else
            tmp->right = insert(tmp->right, value);

        return tmp;
    }
    void InorderTraversal(node *root)
    {
        if (root == NULL)
        {
            return;
        }
        InorderTraversal(root->left);
        cout << root->data << "->";
        InorderTraversal(root->right);
    }
};

int main()
{
    OJ
        bst b;
    cout << "Enter data :"
         << "\n";
    node *root;
    int x;
    while (true)
    {
        cin >> x;
        if(x==-1)
            break;
        root = b.insert(root, x);
    }
    cout << "Inorder Traversal"
         << "\n";
    b.InorderTraversal(root);
    return 0;
}