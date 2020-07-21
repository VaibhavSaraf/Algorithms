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
    node *create(node *root)
    {
        int x;
        cin >> x;
        if (x == -1)
            return NULL;
        if (root == NULL)
        {
            root = new node(x);
        }
        cout << "enter left of: " << x << "\n";
        root->left = create(root->left);
        cout << "enter right of: " << x << "\n";
        root->right = create(root->right);
        return root;
    }
    void InorderTraversal(node *root)
    {
        if (root == NULL)
            return;
        InorderTraversal(root->left);
        cout << root->data << "->";
        InorderTraversal(root->right);
    }
    void PreorderTraversal(node *root)
    {
        if (root == NULL)
            return;
        cout << root->data << "->";
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
    void PostorderTraversal(node *root)
    {
        if (root == NULL)
            return;
        PostorderTraversal(root->left);
        PostorderTraversal(root->right);
        cout << root->data << "->";
    }

    void bfs(node *root)
    {
        if (root == NULL)
            return;
        queue<node *> q;
        q.push(root);
        while (!q.empty())
        {
            node *temp = q.front();
            cout << temp->data << "->"; // if value == root->data retturn true (search)
            q.pop();
            if (temp->left != NULL) // insert, delete
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
};

class bst
{
public:
    node *create(node *root)
    {
        int x;
        
        while (true)
        {
            cin>>x;
            if(x==-1) break;
            root = insert(root,x);
        }
        return root;
    }
    node* insert(node*root,int value)
    {
        if(root==NULL)
        {
            root = new node(value);
            return root;
        }
        if(value<root->data)
            root->left = insert(root->left,value);
        else
        {
            root->right = insert(root->right,value);
        }
        return root;
    }
}

/**
 * dfs 3 
 * 1. Inorder :
 *      1.root->left
 *      2.root->data;
 *      3.root->right
 * 2. Preorder
 *      1.root->data;
 *      2.root->left
 *      3.root->right
 * 3. Postorder
 *      1.root->left
 *      2.root->right
 *      3.root->data;
 * bfs 1
 * 1. levelwise traversal
*/

int
main()
{
    node *root = NULL;
    binaryTree b;
    cout << "value for root: \n";
    root = b.create(root);
    cout << "Inorder Traversal: \n";
    b.InorderTraversal(root);
    cout << "\nPreorder Traversal: \n";
    b.PreorderTraversal(root);
    cout << "\nPostorder Traversal: \n";
    b.PostorderTraversal(root);
    cout << "\nLevelwise Traversal: \n";
    b.bfs(root);
    bst B;
    node* root1 = NULL;
    root1 = B.create(root1);
    return 0;
}