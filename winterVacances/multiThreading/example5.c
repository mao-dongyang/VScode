#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 50000000

typedef struct MY_ARGS {
  int first;
  int last;
  int id;
} MY_ARGS, *MY_ARGSptr;

int *arr;
int result[101];

void *myfunc(void *args) {

  int i;
  MY_ARGSptr my_args = (MY_ARGSptr)args;
  int first = my_args->first;
  int last = my_args->last;
  int id = my_args->id;

  for (i = first; i < last; i++) {
    result[id] = result[id] + arr[i];
  }

  return NULL;
}

int main(void) {
  arr = malloc(sizeof(int) * MAX_SIZE);
  for (int i = 0; i < MAX_SIZE; i++) {
    arr[i] = rand() % 5;
  }

  result[0] = 0;
  result[100] = 0;

  pthread_t th1;
  pthread_t th2;

  int mid = MAX_SIZE / 2;
  MY_ARGS args1 = {0, mid, 0};
  MY_ARGS args2 = {mid, MAX_SIZE, 100};

  pthread_create(&th1, NULL, myfunc, &args1);
  pthread_create(&th2, NULL, myfunc, &args2);

  pthread_join(th1, NULL);
  pthread_join(th2, NULL);

  printf("s1 = %d\n", result[0]);
  printf("s2 = %d\n", result[100]);

  printf("s1 + s2 = %d\n", result[0] + result[100]);

  return 0;
}
