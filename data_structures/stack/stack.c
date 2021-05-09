#include "stack.h"

void create(struct Stack *p) {
  p->top = -1;
}

void push(struct Stack *p, int element) { 
  p->top++; // arrow when pointer
  p->values[p->top] = element;
}

int pop(struct Stack *p) {
  int element = p->values[p->top];
  p->top--;
  return element;
}

int isEmpty(struct Stack p) {
  return (p.top == -1); // dot when not pointer
}

int isFull(struct Stack p) {
  return (p.top == 9);
}