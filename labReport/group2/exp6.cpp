#include <iostream>
#define arrLength 100
using namespace std;

template<typename ArrType,int N>
void makeArr(ArrType (&arr)[N]){
    for (int i = 0; i < N; i++)
    {
        arr[i] = i+2;
    }
}

template<typename ArrType,int N>
void deleteArray(ArrType (&arr)[N],int n){
    for (int i = n; i < arrLength - 1;i++)
    {
        arr[i] = arr[i+1];
    }
}

template<typename ArrType,int N>
void multipleNumber(ArrType (&arr)[N],int n){
    for (int i = n; i < arrLength; i += n)
    {
        deleteArray(arr, n - 2);
    }
}

int main()
{
    int arr[arrLength]; //={0,1,2,3,4,5,6,7,8,9};
    makeArr(arr);
    for (int i = 0; i <= arrLength/2; i++)
    {
        multipleNumber(arr, i);
    }
    return 0;
}