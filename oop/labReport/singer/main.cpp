#include "singer.h"

int singer::numberPeople = 0;

int main() {

  int n1[] = {8, 7, 9};
  int n2[] = {9, 9, 9};
  int n3[] = {4, 5, 6};

  singer sin[3] = {singer(1, "aaa", n1), singer(2, "bbb", n2),
                   singer(3, "ccc", n3)};

  for (int i = 0; i < sin[0].numberPeople; i++) {
    sin[i].getPointAverage();
  }

  sin[0].displaySinger(sin);
  return 0;
}
