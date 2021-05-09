#include <stdio.h>
#include <stdlib.h>

struct myStruct {
  int a;
  int b;
  int c;
};

int main() {

  // FUNÇÕES PARA GERENCIAMENTO DE MEMÓRIA
  /* malloc
  calloc
  realloc
  free */

  struct myStruct my; // 12 bytes o tamanho, pois o strcut é composto de 3 valores de 4 bytes
  int x;
  double y;
  int vect[10]; // 40 bytes, pois cada inteiro possui 4 bytes, e juntando 10 deles = 40 

  printf("%li", sizeof(x)); // retorna em bytes o tamanho de um tipo de dado
  printf("%li", sizeof(y)); // retorna em bytes o tamanho de um tipo de dado
  printf("%li", sizeof(vect)); // retorna em bytes o tamanho de um tipo de dado
  printf("%li", sizeof(my)); // retorna em bytes o tamanho de um tipo de dado

  return 0;
}