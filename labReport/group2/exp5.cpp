#include <iostream>
using namespace std;

int compare(int a,int b){
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

/*
void makeArr(int &arr){
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
}
*/

int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int max;
    max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        max = compare(arr[i], max);
    }
    cout << "The max number in the array is " << max << endl;
    return 0;
}