#include <stdio.h>

void main(){

  int *numa, *numb;

  scanf("%d %d", numa, numb);

  printf("Valores lidos: %d e %d\n", *numa, *numb);
  printf("Os endereços são: %x e %x\n", numa, numb);
}
