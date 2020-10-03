#include<iostream>
using namespace std;


template<typename T, int N>
int sumAround(T arr[][N],int row, int column){
    int sum = 0;
    for (int i = row-1; i <= row+1; i+=2)
    {
        for (int j = column-1; j <= column+1; j+=2)
        {
            sum += arr[i][j];
        }
    }
    return sum;
}


int main(){
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "The sum is " << sumAround(arr, 1, 1) << endl;
}
