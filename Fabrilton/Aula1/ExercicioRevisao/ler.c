#include <stdio.h>
#include <stdlib.h>

int main(){

  char palavra[100];
  int tamanho;

  scanf("%s", palavra);

  tamanho = strlen(palavra);

  printf("A primeira letra é: %c\n", palavra[0]);
  printf("A última letra é: %c\n", palavra[tamanho - 1]);
  printf("O tamanho da palavra é: %d\n", tamanho);


  return 0;

}