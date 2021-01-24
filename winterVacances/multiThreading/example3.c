#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct MY_ARGS {
  int first;
  int last;
} MY_ARGS, *MY_ARGSptr;

int arr[5000];
int sum = 0;

void *myfunc(void *args) {
  MY_ARGSptr ptr = (MY_ARGSptr)args;
  for (int i = ptr->first; i < ptr->last; i++) {
    sum += arr[i];
  }
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

  MY_ARGS args1 = {0, 2500};
  MY_ARGS args2 = {2500, 5000};

  pthread_create(&th0, NULL, myfunc, &args1);
  pthread_create(&th1, NULL, myfunc, &args2);
  pthread_join(th0, NULL);
  pthread_join(th1, NULL);

  printf("sum = %d\n", sum);
  return 0;
}
