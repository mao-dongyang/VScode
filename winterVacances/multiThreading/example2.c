#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct MY_ARGS {
  int first;
  int last;
  int result;
} MY_ARGS, *MY_ARGSptr;

int arr[5000];

void *myfunc(void *args) {
  int sum = 0;
  MY_ARGSptr ptr = (MY_ARGSptr)args;
  for (int i = ptr->first; i < ptr->last; i++) {
    sum += arr[i];
  }
  printf("sum = %d\n", sum);
  ptr->result = sum;
  return NULL;
}

int main(void) {
  for (int i = 0; i < 5000; i++) {
    arr[i] = rand() % 50;
  }

  // for (int i = 0; i < 5000; i++) {
  //   printf("arr[%d] = %d\n", i, arr[i]);
  // }

  pthread_t th0;
  pthread_t th1;

  MY_ARGS args1 = {0, 2500, 0};
  MY_ARGS args2 = {2500, 5000, 0};

  pthread_create(&th0, NULL, myfunc, &args1);
  pthread_create(&th1, NULL, myfunc, &args2);
  pthread_join(th0, NULL);
  pthread_join(th1, NULL);
  printf("total = %d\n", args1.result + args2.result);
  return 0;
}
