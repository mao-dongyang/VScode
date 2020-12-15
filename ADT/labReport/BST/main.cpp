#include <iostream>
using namespace std;

typedef struct BiTreeNode
{
    int data;
    BiTreeNode *lchild, *rchild;
} BiTreeNode, *BiTree;

bool SearchBST(BiTree T, int key, BiTree &p, BiTree &p_parent, BiTree f = NULL)
{
    if (!T)
    {
        p = f;
        //cout << "We can not find it, the last paramenter is the node you can add" << endl;
        return false;
    }
    else if (key == T->data)
    {
        p = T;
        p_parent = f;
        //cout << "We find it!" << endl;
        return true;
    }
    else if (key < T->data)
    {
        return SearchBST(T->lchild, key, p, p_parent, T);
    }
    else
    {
        return SearchBST(T->rchild, key, p, p_parent, T);
    }
}

bool InsertBST(BiTree &T, int e)
{
    BiTree p = NULL;
    BiTree p_parent = NULL;
    if (!SearchBST(T, e, p, p_parent))
    {
        BiTree s = new BiTreeNode;
        s->data = e;
        s->lchild = s->rchild = NULL;
        if (!p)
        {
            T = s;
            //cout << "This is root node, initialized successfully" << endl;
            return true;
        }
        else if (e < p->data)
        {
            p->lchild = s;
            //cout << "Insert Successfully" << endl;
            return true;
        }
        else
        {
            p->rchild = s;
            //cout << "Insert Successfully" << endl;
            return true;
        }
    }
    else
    {
        //cout << "The number has been here!" << endl;
        return false;
    }
}

void drawBranch(BiTree n, bool left, string const &gap)
{
    if (n->rchild)
    {
        drawBranch(n->rchild, false, gap + (left ? "|     " : "      "));
    }
    cout << gap;
    cout << (left ? '\\' : '/');
    cout << "-----";
    cout << n->data << endl;
    if (n->lchild)
    {
        drawBranch(n->lchild, true, gap + (left ? "      " : "|     "));
    }
}

void VisualBiTree(BiTree root)
{
    if (root->rchild)
    {
        drawBranch(root->rchild, false, "");
    }
    cout << root->data << endl;
    if (root->lchild)
    {
        drawBranch(root->lchild, true, "");
    }
}

void deleteBST(BiTree T, int e)
{
    BiTree p;
    BiTree p_parent;
    if (SearchBST(T, e, p, p_parent, T))
    {
        if (e <= p_parent->data)
        {
            if (!p->rchild && p->lchild)
            {
                p_parent->lchild = p->lchild;
            }
            else if (p->rchild && !p->lchild)
            {
                p_parent->lchild = p->rchild;
            }
            else if (!p->rchild && !p->lchild)
            {
                delete p;
                p_parent->lchild = NULL;
            }
            else if (p->rchild && p->lchild)
            {
                BiTree q = p->lchild;
                int data;
                while (q->rchild != NULL)
                {
                    q = q->rchild;
                }
                data = q->data;
                VisualBiTree(T);
                deleteBST(T, q->data);
                p->data = data;
                VisualBiTree(T);
            }
            else
            {
                cout << "something wrong" << endl;
            }
        }
        else
        {
            if (!p->rchild && p->lchild)
            {
                p_parent->rchild = p->lchild;
            }
            else if (p->rchild && !p->lchild)
            {
                p_parent->rchild = p->rchild;
            }
            else if (!p->rchild && !p->lchild)
            {
                delete p;
                p_parent->rchild = NULL;
            }
            else if (p->rchild && p->lchild)
            {
                BiTree q = p->lchild;
                int data;
                while (q->rchild != NULL)
                {
                    q = q->rchild;
                }
                data = q->data;
                deleteBST(T, q->data);
                p->data = data;
            }
            else
            {
                cout << "something wrong" << endl;
            }
        }
    }
}

int main()
{
    BiTree T = NULL;
    BiTree p;
    BiTree p_parent;
    int Input[6] = {8, 10, 5, 6, 3, 13};
    for (int i = 0; i < 6; i++)
    {
        InsertBST(T, Input[i]);
    }
    VisualBiTree(T);
    SearchBST(T, 6, p, p_parent);
    deleteBST(T, 8);
    return 0;
}