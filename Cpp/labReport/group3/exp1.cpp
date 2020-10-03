#include <iostream>
using namespace std;

void transpositionMatrix(int (&_matrix)[3][3],int matrix[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            _matrix[j][i] = matrix[i][j];
        }
    }
}

void addMatrix(int (&addMatrix)[3][3], int _matrix[][3], int matrix[][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            addMatrix[i][j] = _matrix[i][j] + matrix[i][j];
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
    int sumMatrix[3][3];
    transpositionMatrix(_matrix, matrix);
    addMatrix(sumMatrix, _matrix, matrix);
    printMatrix(sumMatrix);
}