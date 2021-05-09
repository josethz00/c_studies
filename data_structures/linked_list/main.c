#include "list.h"
#include <stdio.h>

int main() {
  struct List list;
  int e;

  create(&list);
  insert(&list, 1771);
  insert(&list, 712);
  insert(&list, 543);
  insert(&list, 1243);
  insert(&list, 7);
  insert(&list, 99);

  while (!isEmpty(list)) {
    e = pop(&list);
    printf("Element removed: %d \n", e);
  }

  return 0;
}