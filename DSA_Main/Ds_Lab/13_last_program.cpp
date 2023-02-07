/*
Design a C++ program that uses functions to perform the following:
a. Create a binary search tree of characters.
b. Traverse the above Binary search tree recursively in preorder, in order and post order.
*/
// Binary search tree
#include <iostream>
using namespace std;

class treeNode
{
public:
    char data;
    treeNode *lchild;
    treeNode *rchild;
    treeNode(char x)
    {
        data = x;
        lchild = rchild = NULL;
    }
};

class BinarySearchTree
{
private:
    treeNode *root;

public:
    BinarySearchTree()
    {
        root = NULL;
        create();
    }

    // this will create a binary tree until user gives -1 for the nodes
    void create()
    {
        char x;
        cout << "Enter the root value : ";
        cin >> x;
        root = new treeNode(x);
        while (x != '0')
        {
            cout << "Enter the data to add to the tree : ";
            cin >> x;
            if (x != '0')
            {
                insert(x);
            }
        }

        cout << "Preorder : ";
        preorder(root);
        cout << endl;
        cout << "Inorder : ";
        inorder(root);
        cout << endl;
        cout << "Postorder : ";
        postorder(root);
        cout << endl;
    }

    void inorder(treeNode *p)
    {
        if (!p)
        {
            return;
        }
        else
        {
            inorder(p->lchild);
            cout << p->data << " ";
            inorder(p->rchild);
        }
    }
    void preorder(treeNode *p)
    {
        if (!p)
        {
            return;
        }
        else
        {
            cout << p->data << " ";
            inorder(p->lchild);
            inorder(p->rchild);
        }
    }
    void postorder(treeNode *p)
    {
        if (!p)
        {
            return;
        }
        else
        {
            inorder(p->lchild);
            inorder(p->rchild);
            cout << p->data << " ";
        }
    }

    void insert(char key)
    {
        treeNode *f = root;
        treeNode *t = NULL;
        while (f)
        {
            t = f;
            if (f->data == key)
            {
                cout << key << " is already present in the BST." << endl;
                return;
            }
            else if (key < f->data)
            {
                f = f->lchild;
            }
            else
            {
                f = f->rchild;
            }
        }
        f = new treeNode(key);
        if (key < t->data)
        {
            t->lchild = f;
        }
        else
        {
            t->rchild = f;
        }
    }
};

// sample input : h s w e a b u e f 0

int main()
{
    BinarySearchTree b;

    return 0;
}