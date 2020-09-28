#include <iostream>
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10
using namespace std;

typedef struct sqList
{
    int *elem;
    int length;
    int listsize;
}sqList;


