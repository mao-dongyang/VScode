#include <iostream>
#define odd 1
#define even 0
using namespace std;

typedef struct sqList
{
    int *elem;
    int length;
    int listsize;
} sqList;

void fillIn(sqList &list, int n, int oddOReven)
{
    list.elem = new int[10];
    for (int i = 0; i < n; i++)
    {
        list.elem[i] = 2 * i + oddOReven;
    }
    list.length = n;
    list.listsize = n;
}

void mergeList_Sq(sqList la, sqList lb, sqList &lc)
{
    int *pa, *pb, *pc;
    pa = la.elem;
    pb = lb.elem;
    lc.listsize = lc.length = la.length + lb.length;
    pc = lc.elem = new int[lc.listsize];
    if (pc)
    {
        int *paLast = la.elem + la.length - 1;
        int *pbLast = lb.elem + lb.length - 1;
        while (pa <= paLast && pb <= pbLast)
        {
            if (*pa <= *pb)
            {
                *pc = *pa;
                pc++;
                pa++;
            }
            else
            {
                *pc = *pb;
                pc++;
                pb++;
            }
        }
        while (pa <= paLast)
        {
            *pc++ = *pa++;
        }
        while (pb <= pbLast)
        {
            *pc++ = *pb++;
        }
    }
}

void displaySqlist(sqList l)
{
    for (int i = 0; i < l.length; i++)
    {
        cout << "\t" << l.elem[i] << "\t" << endl;
    }
}

void displayTwoSqlist(sqList l1, sqList l2)
{
    for (int i = 0; i < (l1.length > l2.length ? l1.length : l2.length); i++)
    {
        cout << l1.elem[i] << "\t\t" << l2.elem[i] << endl;
    }
}

int main()
{
    sqList list1, list2, list3;
    fillIn(list1, 6, odd);
    fillIn(list2, 6, even);
    mergeList_Sq(list1, list2, list3);
    cout << "Two sqlist below" << endl;
    displayTwoSqlist(list1, list2);
    cout << "merged into one sqlist" << endl;
    displaySqlist(list3);
    cout << "\nThe length is ";
    cout << list3.length << endl;
    cout << "\nThe listsize is ";
    cout << list3.listsize << endl;
    return 0;
}