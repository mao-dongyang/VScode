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

int main()
{
    sqList list1, list2, list3;
    fillIn(list1, 10, odd);
    fillIn(list2, 10, even);
    mergeList_Sq(list1, list2, list3);
    cout << "Two sqlist below" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << list1.elem[i] << "\t" << list2.elem[i] << endl;
    }
    cout << "merged into one sqlist" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << list3.elem[i] << endl;
    }
    cout << "\nThe length is ";
    cout << list3.length << endl;
    cout << "\nThe listsize is ";
    cout << list3.listsize << endl;
    return 0;
}