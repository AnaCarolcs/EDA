#include <stdio.h>

int soma(int a, int b){
  return a + b;
}

int subt(int a, int b){
  return a - b;
}

int divi(int a, int b){
  return a / b;
}

int mult(int a, int b){
  return a * b;
}

void main(){

  int a, b, f;

  scanf("%d %d %d", &a, &b, &f);

  int (*p) (int i, int j);

  switch(f){
    case 1:
      p = soma;
      break;
    case 2:
      p = subt;
      break;
    case 3:
      p = divi;
      break;
    case 4:
      p = mult;
      break;
    default:
      break;
  }

  int res = (*p)(a,b);

  printf("%d\n", res);

}