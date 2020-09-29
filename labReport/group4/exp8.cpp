#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int mutiply(int a, int b){
    return a * b;
}

void op(int x, int y, int (*f)(int x, int y)){
    cout << (*f)(x, y) << endl;
}

int main(){
    int x, y;
    cout << "Please enter two numbers" << endl;
    cin >> x >> y;
    op(x, y, add);
    op(x, y, mutiply);
    return 0;
}