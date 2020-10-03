#include <iostream>
using namespace std;

typedef struct subject {
    int math;
    int ADT;
    int probability;
    int OOP;
} sub;

typedef struct student {
    long long int num;
    char name[20];
    sub sub;
} stud;


int main(){
    student s1 = {201910311127, "Philipe", {91,92,93,94}};
    cout << s1.name << endl;
    cout << s1.num << endl;
    cout << s1.sub.ADT << endl;
    cout << s1.sub.OOP << endl;
    cout << s1.sub.math << endl;
    cout << s1.sub.probability << endl;
    return 0;
}