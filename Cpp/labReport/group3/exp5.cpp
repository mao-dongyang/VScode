#include <iostream>
using namespace std;

void swapArray(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++)
    {
        int flg = 0;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swapArray(arr, j, j + 1);
                flg++;
            }
        }
        if (flg==0)
        {
            break;
        } 
    }
}

int main(){
    int arr[5] = {1, 7, 5, 9, 3};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}