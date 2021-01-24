#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

void *myfunc(void *args) {
  for (int i = 0; i < 20; i++) {
    printf("i = %d => %s\n", i, (char *)args);
  }
  return NULL;
}

int main(void) {
  pthread_t th0;
  pthread_t th1;
  pthread_create(&th0, NULL, myfunc, "th0");
  pthread_create(&th1, NULL, myfunc, "th1");
  pthread_join(th0, NULL);
  pthread_join(th1, NULL);
  return 0;
}
