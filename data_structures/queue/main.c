#include <stdio.h>
#include "queue.h"

int main() {
  struct Queue p;
  int element;

  create(&p);

  insert(&p, 345);
  insert(&p, 2222);
  insert(&p, 87191);
  insert(&p, 112);
  insert(&p, 9);
  insert(&p, 729);

  printf("Welcome to Tomé Bank - here your money is more rentable \n");
  printf("******************************************************** \n");

  while(!isEmpty(p)) {
    element = pop(&p);
    printf("\n \n Current queue position: %d ", element);
  }

  printf("\n\n Program finished \n\n");

  return 0;
}