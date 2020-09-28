#include <iostream>
using namespace std;

typedef struct student {
    long long int num;
    char name[20];
    char sex[20];
} student;


int main(){
    student s1 = {201910311127, "Philipe", "Boy"};
    cout << s1.name << endl;
    cout << s1.num << endl;
    cout << s1.sex << endl;
    return 0;
}