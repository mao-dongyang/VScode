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
    int arr[3];
    cout << "Please enter three numbers " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr, 3);
    cout << "The least number\t" << arr[0] << endl;
    cout << "The largest number\t" << arr[2] << endl;
    return 0;
}