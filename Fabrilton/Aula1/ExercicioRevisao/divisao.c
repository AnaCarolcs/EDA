#include <stdio.h>
#include <stdlib.h>

int main(){

  int val1, val2, result;
  char resposta;


  scanf("%d%d", &val1, &val2);

  if (val2 == 0){
    printf("Valor inválido\n");
  } else if (val2 > 0){
    result = val1/val2;
    printf("%d\n", result);
  }

  printf("VOCÊ DESEJA OUTRO CÁLCULO (S/N)?\n");
  scanf("%s", &resposta);

while(resposta == 'S'){

  scanf("%d%d", &val1, &val2);

  if (val2 == 0){
    printf("Valor inválido\n");
  } else if (val2 > 0){
    result = val1/val2;
    printf("%d\n", result);
  }

  printf("VOCÊ DESEJA OUTRO CÁLCULO (S/N)?\n");
  scanf("%s", &resposta);

}

  return 0;
}