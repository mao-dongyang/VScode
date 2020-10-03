#include<iostream>
using namespace std;

int numberCreator(int n){
    if (n==1){
        return 1;
    }else if (n==2){
        return 2;
    }else{
        return numberCreator(n - 1) + numberCreator(n - 2);
    }
}

double itemCreator(int n){
    return numberCreator(n + 1) / (double)numberCreator(n);
}


int main(){
    double sum = 0;
    for (int n = 1; n <= 20; n++){
        sum += itemCreator(n);
    }
    cout << "The sum is " << sum << endl;
    return 0;
}