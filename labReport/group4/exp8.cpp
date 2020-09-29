#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int mutiply(int a, int b){
    return a * b;
}

void op(int x, int y, int (*f)(int x, int y)){
    cout << "Two numbers add" << endl;
    f = add;
    cout << (*f)(x, y) << endl;
    cout << "Two numbers mutiply" << endl;
    f = mutiply;
    cout << (*f)(x, y) << endl;
}

int main(){
    int (*caculate)(int x, int y);
    int x, y;
    cout << "Please enter two numbers" << endl;
    cin >> x >> y;
    op(x, y, caculate);
    return 0;
}