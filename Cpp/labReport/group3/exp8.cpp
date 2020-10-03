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

void char2int(char carr[], int arr[]){
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (int)carr[i];
    }
}

void int2char(int arr[], char carr[]){
    for (int i = 0; i < 3; i++)
    {
        carr[i] = (char)arr[i];
    }
}

void printCarray(char arr[]){
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\t";
    }
}

int main(){
    char carr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> carr[i];
    }
    int arr[3];
    char2int(carr, arr);
    bubbleSort(arr, 3);
    int2char(arr, carr);
    printCarray(carr);
    return 0;
}