#include <iostream>
#include <stdlib.h>
using namespace std;

int compare(const void *a, const void *b) {
  int *pa = (int *)a;
  int *pb = (int *)b;
  int num1 = *pa;
  int num2 = *pb;
  return num1 - num2;
}

int main() {
  int arr[7] = {8, 2, 3, 1, 6, 4, 5};
  qsort(arr, 7, sizeof(int), compare);
  for (int i = 0; i < 7; ++i) {
    cout << arr[i] << endl;
  }
  return 0;
}
