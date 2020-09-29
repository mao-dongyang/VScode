#include <iostream>
using namespace std;
#define row 3
#define colume 3

void two_D2one_D(int matrix[][colume], int arr[]){
    for (int i = 0; i < colume; i++)
    {
        arr[i] = 0;
        for (int j = 0; j < row; j++)
        {
            arr[i] += matrix[i][j];
        }
    }
}

int main(){
    int matrix[row][colume] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr[row] = {0, 0, 0};
    two_D2one_D(matrix, arr);
    for (int i = 0; i < row; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}