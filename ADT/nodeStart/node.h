//
// Created by Administrator on 2020/10/14.
//
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

void creatList(LinkList &L, int n)
{
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
    cout << "creat successfully" << endl;
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

void deleteNode(int n, LinkList L)
{
    int former = n - 1;
    LinkList linkFormerNode = findNode(former, L);
    LinkList linkNowNode = linkFormerNode->next;
    contactPerson deleteData = linkNowNode->data;
    linkFormerNode->next = linkNowNode->next;
    delete linkNowNode;
}

inline int min(int a, int b)
{
    return a < b ? a : b;
}

inline double max(double a, double b)
{
    return a > b ? a : b;
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

double judgeNode(string input, LinkList L, int n)
{
    string name = findNode(n, L)->data.name;
    return similarTwoString(input, name);
}

int searchNode(string input, LinkList L)
{
    LinkList q = findNode(0, L);
    int maxPlace = 0;
    double maxSimilar = 0;
    for (int i = 1;; i++)
    {
        if (judgeNode(input, L, i) > maxSimilar)
        {
            maxSimilar = max(maxSimilar, judgeNode(input, L, i));
            q = findNode(i, L);
            maxPlace = i;
        }
        if (findNode(i, L)->next == NULL)
            break;
    }
    cout << q->data.name << endl;
    cout << q->data.telePhoneNumber << endl;
    return maxPlace;
}