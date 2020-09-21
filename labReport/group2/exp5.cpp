#include <iostream>
#define arrLength 15
using namespace std;

int compare(int a,int b){
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

template<typename ArrType,int N>
void makeArr(ArrType (&arr)[N]){
    for (int i = 0; i < N; i++)
    {
        arr[i] = i;
    }
}

int main(){
    int arr[arrLength]; //={0,1,2,3,4,5,6,7,8,9};
    int max;
    makeArr(arr);
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    max = arr[0];
    for (int i = 1; i < arrLength; i++)
    {
        max = compare(arr[i], max);
    }
    cout << "The max number in the array is " << max << endl;
    return 0;
}