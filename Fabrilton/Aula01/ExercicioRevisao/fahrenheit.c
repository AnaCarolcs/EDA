#include <stdio.h>
#include <stdlib.h>

int transformaFahrenheit(int f){
  int c;
  c = (5 * (f - 32))/9;
  return c;
}

int main () {

  int f, c, aux;

  scanf("%d", &f);

  printf("%d\n", transformaFahrenheit(f));

  return 0;

}