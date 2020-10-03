#include <iostream>
using namespace std;
#define arrLength 3

void uint2array(int n, int arr[]){
    for (int i = 0; i < 3; i++)
    {
        arr[i] = n % 10;
        n /= 10;
    }
}

void printArray(int arr[]){
    for (int i = arrLength-1; i >= 0; i--)
    {
        cout << arr[i] << "\t";
    }
}

int main(){
    int n;
    int arr[arrLength];
    cout << "Please enter a three-digital number" << endl;
    cin >> n;
    uint2array(n, arr);
    printArray(arr);
    return 0;
}