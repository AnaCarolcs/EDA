#include <stdio.h>

void main(){

  int numa, numb;
  //int *prt_a, *prt_b;

  scanf("%d %d",&numa, &numb);

  //*prt_a = &numa;
  //*prt_b = &numb;

  printf("Valores lidos: %d e %d\n", numa, numb);
  printf("Os endereços são: %x e %x\n", &numa, &numb);
}