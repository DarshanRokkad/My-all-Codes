#include <iostream>
#include <stack>
#include <queue>
using namespace std;

template <class T>
class treeNode
{
private:
    T data;
    treeNode<T> *lchild, *rchild;
    template <class U>
    friend class BST;

public:
    treeNode(T data)
    {
        this->data = data;
        lchild = rchild = NULL;
    }
    // treeNode(T data, treeNode<T> *l, treeNode<T> *r)
    // {
    //     this->data = data;
    //     lchild = l;
    //     rchild = r;
    // }
};

template <class T>
class BST
{
private:
    treeNode<T> *root;

public:
    BST()
    {
        root = NULL;
    }
    // BST(const BST<T> &s)
    // {
    //     root = copy(s.root);
    // }
    void create();
    void inorder(treeNode<T> *);
    void preorder(treeNode<T> *);
    void postorder(treeNode<T> *);
    void iterative_inorder();
    treeNode<T> *getRoot();
    void levelOrder();
    // treeNode<T> copy(treeNode<T> *);
};

template <class T>
void BST<T>::create()
{
    cout << "Enter the data of the root : ";
    T data;
    cin >> data;
    root = new treeNode<T>(data);
    treeNode<T> *t, *tail;
    bool flag = true;
    while (flag)
    {
        t = root;
        cout << "Enter data to add to binary tree \n (Enter to 0 to exit) : ";
        cin >> data;
        if (data == 0)
        {
            flag = false;
        }
        else
        {
            treeNode<T> *crea = new treeNode<T>(data);
            bool duplicate = false;
            while (t)
            {
                tail = t;
                if (data == t->data)
                {
                    cout << data << " is already present." << endl;
                    duplicate = true;
                    break;
                }
                else if (data < t->data)
                {
                    t = t->lchild;
                }
                else
                {
                    t = t->rchild;
                }
            }
            if (data < tail->data && !duplicate)
            {
                tail->lchild = crea;
            }
            else if (!duplicate)
            {
                tail->rchild = crea;
            }
        }
    }
}

template <class T>
void BST<T>::inorder(treeNode<T> *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << " ";
        inorder(p->rchild);
    }
}

template <class T>
void BST<T>::preorder(treeNode<T> *p)
{
    if (p)
    {
        cout << p->data << " ";
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

template <class T>
void BST<T>::postorder(treeNode<T> *p)
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << " ";
    }
}

template <class T>
void BST<T>::iterative_inorder()
{
    stack<treeNode<T> *> st;
    treeNode<T> *t = root;
    while (t || !st.empty())
    {
        if (t)
        {
            st.push(t);
            t = t->lchild;
        }
        else
        {
            t = st.top();
            st.pop();
            cout << t->data << " ";
            t = t->rchild;
        }
    }
}

template <class T>
void BST<T>::levelOrder()
{
    queue<treeNode<T> *> q;
    treeNode<T> *p = root;
    while (p)
    {
        cout << p->data << " ";
        if (p->lchild)
            q.push(p->lchild);
        if (p->rchild)
            q.push(p->rchild);
        p = q.front();
        q.pop();
    }
}

// template <class T>
// treeNode<T> BST<T>::copy(treeNode<T> *p)
// {
//     if (p == NULL)
//         return NULL;
//     return new treeNode<T>(p->data, copy(p->lchild), copy(p->rchild));
// }

template <class T>
treeNode<T> *BST<T>::getRoot()
{
    return root;
}

int main()
{
    cout << "Binary search tree." << endl;
    BST<int> b;
    cout << "Create BST." << endl;
    b.create();

    cout << "Preorder Traversal ." << endl;
    b.preorder(b.getRoot());
    cout << endl;

    cout << "Inorder Traversal ." << endl;
    b.inorder(b.getRoot());
    cout << endl;

    cout << "Iterative inorder Traversal . " << endl;
    b.iterative_inorder();
    cout << endl;

    cout << "Postorder Traversal." << endl;
    b.postorder(b.getRoot());
    cout << endl;

    cout << "Level order Traversal." << endl;
    b.levelOrder();
    cout << endl;

    // BST<int> c(b);
    // cout << "Create BST." << endl;
    // c.create();

    // cout << "Preorder Traversal ." << endl;
    // c.preorder(c.getRoot());
    // cout << endl;

    // cout << "Inorder Traversal ." << endl;
    // c.inorder(c.getRoot());
    // cout << endl;

    // cout << "Iterative inorder Traversal . " << endl;
    // c.iterative_inorder();
    // cout << endl;

    // cout << "Postorder Traversal." << endl;
    // c.postorder(c.getRoot());
    // cout << endl;

    // cout << "Level order Traversal." << endl;
    // c.levelOrder();
    // cout << endl;

    return 0;
}