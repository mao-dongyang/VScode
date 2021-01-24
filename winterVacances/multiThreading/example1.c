#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *myfunc(void *args) {
  printf("Hello World\n");
  return NULL;
}

int main(void) {
  pthread_t th;
  pthread_create(&th, NULL, myfunc, NULL);
  pthread_join(th, NULL);
  return 0;
}
