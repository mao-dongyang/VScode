#include "node.h"

int main()
{
    LinkList L = new LNode;
    int maxPlace;
    string input;
    int init;
    int select;
    for (;;)
    {
        cout << "Welcom to Address Book of Mao" << endl;
        cout << "1) Start my new address book" << endl;
        cout << "2) I already have my address book" << endl;
        cin >> select;
        switch (select)
        {
        case 1:
            cout << "Please enter how many friends you want to add to your address book." << endl;
            cin >> init;
            creatList(L, init);
            break;

        case 2:
            int chose;
            cout << "1) I want to find someone." << endl;
            cout << "2) I want add someone." << endl;
            cin >> chose;
            switch (chose)
            {
            case 1:
                cout << "Please enter his/her name" << endl;
                cin >> input;
                maxPlace = searchNode(input, L);
                int DC;
                cout << "Is it her/him ?" << endl;
                cout << "Do you want to delete[1] OR change[2] ?" << endl;
                cin >> DC;
                switch (DC)
                {
                case 1:
                    deleteNode(maxPlace, L);
                    break;

                default:
                    deleteNode(maxPlace, L);
                    addNode(maxPlace, L);
                    break;
                }
                break;

            case 2:
                addNode(1, L);
                break;

            default:
                break;
            }

        default:
            break;
        }
    }
}
