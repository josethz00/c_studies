#include "queue.h"

void create(struct Queue *p) {
  p->beg = 0;
  p->end = 0;
  p->total = 0;
}

void insert(struct Queue *p, int element) { 
  p->values[p->end] = element;
  p->end += 1;
  if (p->end == 10) {
    p->end = 0;
  }
  p->total += 1;
}

int pop(struct Queue *p) {
  int elem = p->values[p->beg];
  p->beg += 1;
  if (p->beg == 10) {
    p->beg = 0;
  }
  p->total -= 1;

  return elem;
}

int isEmpty(struct Queue p) {
  return (p.total == 0); // dot when not pointer
}

int isFull(struct Queue p) {
  return (p.total == 10);
}