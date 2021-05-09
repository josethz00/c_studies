#include <stdio.h>
#include "stack.h"

int main(int argc, char **argv[]) {
  int value, rest;
  struct Stack p;
  create(&p);

  printf("Type some value bellow...     ");
  scanf("%d", &value);

  while (value != 0) {
    rest = value % 2;
    push(&p, rest);
    value = value / 2;
  }

  while(!isEmpty(p)) {
    rest = pop(&p);
    printf("%d ", rest);
  }

  printf("\n\n Program finished \n\n");

  return 0;
}