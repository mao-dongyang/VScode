#include <iostream>
using namespace std;

template <typename T, int N>
void transpositionMatrix(T _matrix[][N],T matrix[][N]){
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            _matrix[j][i] = matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
}

int main(){
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int _matrix[3][3];
    transpositionMatrix(_matrix, matrix);
    printMatrix(_matrix);
}