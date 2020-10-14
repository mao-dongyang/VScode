#include "node.h"

int main()
{
    LinkList L = new LNode;
    int maxPlace;
    string input;
    creatList(L, 3);
    cout << "please add" << endl;
    addNode(2, L);
    cout << "please enter name" << endl;
    cin >> input;
    maxPlace = searchNode(input, L);
    deleteNode(maxPlace, L);
    searchNode(input, L);
    return 0;
}
