#include <iostream>
#include <string>
using namespace std;

typedef struct BiTreeNode
{
    char data;
    BiTreeNode *Lchild, *Rchild;
} BiTreeNode, *BiTree;

typedef struct BiTreeHead
{
    BiTree root;
    string ID;
} BiTreeHead;

typedef struct charStack
{
    char *base;
    char *top;
    int stacksize;
} charStack;

void InitCharStack(charStack &s)
{
    s.stacksize = 100;
    s.base = new char[s.stacksize];
    s.top = s.base;
}

void Push(char e, charStack &s)
{
    *(s.top++) = e;
}

char Pop(charStack &s)
{
    char e;
    e = *(--s.top);
    return e;
}

char GetTop(charStack s)
{
    return *(s.top - 1);
}

void PreorderCreat(BiTree &t, charStack &ch)
{
    if (GetTop(ch) == '#')
    {
        Pop(ch);
        t = NULL;
    }
    else
    {
        t = new BiTreeNode;
        t->data = Pop(ch);
        PreorderCreat(t->Lchild, ch);
        PreorderCreat(t->Rchild, ch);
    }
}

void CreateBiTreeByHead(BiTreeHead &r)
{
    if (r.ID == "")
    {
        r.root = NULL;
    }
    else
    {
        charStack clip;
        InitCharStack(clip);
        for (int i = r.ID.length() - 1; i >= 0; i--)
        {
            Push(r.ID[i], clip);
        }
        PreorderCreat(r.root, clip);
    }
}

int Depth(BiTree T)
{
    int depthval = 0;
    if (!T)
    {
        depthval = 0;
    }
    else
    {
        int depthLeft = Depth(T->Lchild);
        int depthRight = Depth(T->Rchild);
        depthval = 1 + (depthLeft > depthRight ? depthLeft : depthRight);
    }
    return depthval;
}

void drawBranch(BiTree n, bool left, string const &gap)
{
    if (n->Rchild)
    {
        drawBranch(n->Rchild, false, gap + (left ? "|     " : "      "));
    }
    cout << gap;
    cout << (left ? '\\' : '/');
    cout << "-----";
    cout << n->data << endl;
    if (n->Lchild)
    {
        drawBranch(n->Lchild, true, gap + (left ? "      " : "|     "));
    }
}

void VisualBiTree(BiTree root)
{
    if (root->Rchild)
    {
        drawBranch(root->Rchild, false, "");
    }
    cout << root->data << endl;
    if (root->Lchild)
    {
        drawBranch(root->Lchild, true, "");
    }
}

void CopyBiTree(BiTreeHead &H, BiTreeHead &h)
{
    h.ID = H.ID;
    CreateBiTreeByHead(h);
    VisualBiTree(h.root);
    cout << "Its depth is " << Depth(h.root) << endl;
    cout << "This is copy" << endl;
    cout << "\n\n\n"
         << endl;
}

int main()
{
    BiTreeHead H;
    BiTreeHead h;
    H.ID = "ABC##D##E#FGH####";
    CreateBiTreeByHead(H);
    CopyBiTree(H, h);
    VisualBiTree(H.root);
    cout << "Its depth is " << Depth(H.root) << endl;
    cout << "This is original" << endl;
    return 0;
}
