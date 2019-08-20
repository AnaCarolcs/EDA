#include <stdio.h>

void main(){

  int *numa, *numb;
  int a, b;

  scanf("%d %d", &a, &b);

  numa = &a;
  numb = &b;

  printf("Valores lidos: %d e %d\n", *numa, *numb);
  printf("Os endereços são: %x e %x\n", numa, numb);
}

