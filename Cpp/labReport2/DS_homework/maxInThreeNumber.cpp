#include <iostream>
using namespace std;

void swap(int &former,int &latter){
    int temp;
    temp = former;
    former = latter;
    latter = temp;
}

void judgeSwap(int &former,int &latter){
    if (former<latter)
    {
        swap(former, latter);
    }
}

int main(){
    int a, b, c;
    cout << "Please enter three numbers " << endl;
    cin >> a >> b >> c;
    judgeSwap(a, b);
    judgeSwap(a, c);
    judgeSwap(b, c);
    cout << a << "\t" << b << "\t" << c;
    return 0;
}