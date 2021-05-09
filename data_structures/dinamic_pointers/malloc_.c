#include <stdio.h>
#include <stdlib.h>

int main() {
  // short x; // ocupa 2 bytes (16 bits) 

  // ALOCAÇÃO DINÂMICA É QUANDO NÃO SABEMOS O TAMANHO EXATO DO PROGRAMA/VARIAVEL
  // int *p = malloc(sizeof(int)); // memory allocation, retorna um ponteiro do tipo void, então é preciso fazer o cast para int ( por padrão os ponteiros genéricos sempre retornam void)
  int *p = (int *) malloc(sizeof(int)); // malloc só aceita valores size_t (unsigned int)
  // se não houver espaço para alocar memória utilizando malloc, será retornado NULL

  if (p == NULL) {
    printf("malloc não funcionou");
  }

  *p = 1000;

  // printf("%i", *p);

  free(p); // desaloca o espaço de memória, ou seja, desbloqueia esse endereço, porém não remove o seu conteúdo (valor), somente deixa esse espaço disponível para outros programas ou instruções sobrescreverem

  // printf("%i", *p); // vai mostrar 1000 mesmo desalocando, pois o ponteiro não deixou de existir, ele so teve o seu espaço desbloqueado

  int *m; // ponteiros são arrays
  p = (int *) calloc(5, sizeof(int)); // aloca memoria e define quantos elementos desse tamanho quer alocar // a função calloc tbm inicializa os valores da variavel, se for int por exemplo inicializa com 0

  for (int i = 0; i < 5; i++) {
    printf("Endereço de m%i = %p \n", i, &m[i]);
  }
  

  return 0;
}