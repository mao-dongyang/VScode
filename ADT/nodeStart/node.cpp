#include <iostream>
#include <string>
using namespace std;

typedef struct contactPersonType
{
    string name;
    string telePhoneNumber;
} contactPerson;

typedef struct LNode
{
    contactPerson data;
    LNode *next;
} LNode, *LinkList;

void fillInData(LinkList L)
{
    cout << "Please enter your friend's name" << endl;
    cin >> L->data.name;
    cout << "Please enter your friend's telephone number" << endl;
    cin >> L->data.telePhoneNumber;
}

void creatList(LinkList L, int n)
{
    L = new LNode;
    L->next = NULL;
    fillInData(L);
    for (int i = n - 1; i > 0; i--)
    {
        LinkList p = new LNode;
        fillInData(p);
        p->next = L;
        L = p;
    }
    LinkList p = new LNode;
    p->next = L;
    p->data = {"Name", "Telephone Number"};
    L = p;
}

LinkList findNode(int n, LinkList L)
{
    LinkList p = L;
    for (int i = 1; i <= n; i++)
    {
        p = p->next;
    }
    return p;
}

void addNode(int n, LinkList L)
{
    int former = n - 1;
    int latter = n;
    LinkList linkFormerNode = findNode(former, L);
    LinkList linkNewNode = new LNode;
    fillInData(linkNewNode);
    LNode &newNode = *linkNewNode;
    newNode.next = findNode(latter, L);
    linkFormerNode->next = linkNewNode;
}

void displayNodeData(int n, LinkList L)
{
    string name;
    string telePhoneNumber;
    name = findNode(n, L)->data.name;
    telePhoneNumber = findNode(n, L)->data.telePhoneNumber;
    cout << "The name is " << name << "\n"
         << "The telephone-number is " << telePhoneNumber << endl;
}

contactPerson deleteNode(int n, LinkList L)
{
    int former = n - 1;
    LinkList linkFormerNode = findNode(former, L);
    LinkList linkNowNode = linkFormerNode->next;
    contactPerson deleteData = linkNowNode->data;
    linkFormerNode->next = linkNowNode->next;
    delete linkNowNode;
    return deleteData;
}

inline int min(int a, int b)
{
    return a < b ? a : b;
}

void stringFillInVocabulary(string a, int vocabulary[])
{
    for (int i = 0; i < (int)a.length(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            vocabulary[a[i] - 'a']++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            vocabulary[a[i] - 'A']++;
        }
        else
        {
            cout << "Name contains unrecognized characters" << endl;
        }
    }
}

double similarTwoString(string a, string b)
{
    int aVocabulary[26] = {};
    int bVocabulary[26] = {};
    stringFillInVocabulary(a, aVocabulary);
    stringFillInVocabulary(b, bVocabulary);
    int same = 0;
    int length = a.length() + b.length();
    for (int i = 0; i < 26; i++)
    {
        same += min(aVocabulary[i], bVocabulary[i]);
    }
    return 2 * (double)same / (double)length;
}

int main()
{
    string a;
    string b;
    cin >> a >> b;
    cout << similarTwoString(a, b);
    return 0;
}