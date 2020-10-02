#include <iostream>
#define odd 1
#define even 0
using namespace std;

typedef struct sqList
{
    int *elem;
    int length;
    int listsize;
}sqList;

void fillIn(sqList &list, int n, int oddOReven){
    list.elem = new int[10];
    for (int i = 0; i < n; i++)
    {
        list.elem[i] = 2 * i + oddOReven;
    }
    list.length = n;
    list.listsize = n;
}



int main(){
    sqList list1, list2;
    fillIn(list1, 10, odd);
    fillIn(list2, 10, even);
    for (int i = 0; i < 10; i++)
    {
        cout << list1.elem[i] << endl;
    }
    return 0;
}