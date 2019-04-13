/*Aplicações de ponteiro:
-Passagem por referência
-retorno de multiplos valores

Exemplo:
Faça uma função que receba um valor n e retorne n² e raíz de n

Compilar com -lm
*/

#include<stdio.h>
#include<math.h>
#include <stdlib.h>

void calcula(int n, int*n2, int*raizn){
  *n2 = pow(n,2);
  *raizn = sqrt(n);
}

int main () {
  int n;
  int n2, raizn;

  scanf("%d", &n);

  calcula(n,&n2,&raizn);

  printf("Quadrado: %d\n", n2);
  printf("Raiz: %d\n", raizn);

  return 0;
}