#include <iostream>
using namespace std;

template<typename T, int N>
T diagSum(T arr[][N]){
    T sum = 0;
    for (T i = 0; i < N; i++)
    {
        sum += arr[i][i];
    }
    return sum;
}

int main(){
    int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "The sum is " << diagSum(arr) << endl;
    return 0;
}
