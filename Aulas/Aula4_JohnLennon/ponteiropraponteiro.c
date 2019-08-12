/*Ponteiro pra ponteiro
Chamamos isso de indireção múltipla

int **q -> int *p -> int i

int i = 5;
int *p = &i;
int **q = &p;

printf("%d\n", *p);
printf("%d\n", *(*q));

Obs: Usamos duas vezes o operador *
Faz sentido empregar da mesma forma o operador
*/

//Como podemos arrumar o código para imprimir 10 usando q?

#include <stdio.h>

int main() {
  int x;
  int *p = &x;
  int **q = &p;
  x = 10;

  printf("%d\n", *(*q));

  return 0;
}