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
        while (true)
        {
            cin >> x;
            if (x == -1)
                break;
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

    bool search(node *root, int value)
    {
        bool flag = false;
        if (root == NULL)
        {
            return false;
        }
        if (root->data == value)
        {
            flag = true;
            return flag;
        }
        else if (value < root->data)
            flag = search(root->left, value);

        else if (value > root->data)
            flag = search(root->right, value);
        else
        {
            flag = false;
        }
        return flag;
    }

    node *deleteNode(node *root, int value)
    {
        /**
        * if node is leaf node => (direct delete)
        * if node has one child => (replace child by that node and delete current node)
        * if node has 2 child => (replace node by min(node->right) or max(node->left)  then delete current node)
        */

        if (root == NULL)
        {
            return NULL;
        }
        if (value < root->data)
        {
            root->left = deleteNode(root->left, value);
        }
        else if (value > root->data)
        {
            root->right = deleteNode(root->right, value);
        }
        // if value == root->data; or data found
        else
        {
            // root has no children
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                root = NULL;
                return root;
            }
            // if root have one child;
            else if(root->left==NULL)
            {
                node *tmp = root;
                root->right = root;
                delete tmp;
                return root;
            }
            else if(root->right==NULL)
            {
                node *tmp = root;
                root->left = root;
                delete tmp;
                return root;
            }
            // if root has 2 child
            else
            {
                node *tmp = find_min_node(root->right);
                root->data = tmp->data;
                root->right = deleteNode(root->right,tmp->data);
            }
            return root;
        }
    }   
    node *find_min_node(node* root)
    {
        node *tmp = root;
        while (tmp!=NULL && tmp->left!=NULL)
        {
            tmp=tmp->left;
        }
        return tmp;
    }
    void deleteTree(node *root)
    {
        while (root!=NULL)
        {
            root = deleteNode(root,root->data);
        }   
        root = NULL;
    }
};

int main()
{
    OJ
        bst b;
    cout << "Enter data :"
         << "\n";
    node *root = NULL;
    root = b.create(root);
    cout << "Inorder Traversal"
         << "\n";
    b.InorderTraversal(root);
    if (b.search(root, 15))
    {
        cout << "\nfound\n";
    }
    else
    {
        cout << "\nnot found\n";
    }
    cout << "Insert Element\n";
    int x;
    cin >> x;
    root = b.insert(root, x);
    b.InorderTraversal(root);
    cout<<"\nInsert Element which have to deleted:\n";
    int xx;cin>>xx;
    root = b.deleteNode(root,xx);
    b.InorderTraversal(root);
    // cout<<"\nDeleting root\n";
    // b.deleteTree(root);
    // b.InorderTraversal(root);
    return 0;
}