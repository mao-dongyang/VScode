#include <iostream>
using namespace std;

double averageArr(int arr[], int len){
    double sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum / len;
}

int main(){
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "The average is " << averageArr(arr, 10) << endl;
    return 0;
}