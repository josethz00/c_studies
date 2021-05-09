#include "list.h"
#include <stdlib.h>

void create(struct List *list) {
  list->beg = NULL;
}

void insert(struct List *list, int element) {
  struct Box *newBox;
  struct Box *aux;
  newBox = (struct Box*) malloc(sizeof(struct Box));
  newBox->next = NULL;
  newBox->element = element;

  if (list->beg == NULL) {
    list->beg = newBox;
  } else {
    aux = list->beg;
    while (aux->next != NULL) {
      aux = aux->next;
    }
    aux->next = newBox;
  }
}

int isEmpty(struct List list) {
  return (list.beg == NULL);
}

int pop(struct List *list) {
  struct Box *aux = list->beg;
  int element = aux->element;
  list->beg = aux->next;
  free(aux);
  aux = NULL;
  return element;  
}

int show(struct List list) {

}
