#include <stdio.h>

int main () {
  int i, j, k, lidos[20];
  int repetidos[10] = {-2,-2,-2,-2,-2,-2,-2,-2,-2,-2};
  int repeticoes[10] = {1,1,1,1,1,1,1,1,1,1};

  for (i = 0; i < 20; i++){
    printf("Digite o a[%d]\n", i);
    scanf("%d", &lidos[i]);

    for (j = 0; j <= i; j++){
      if (lidos[i] == repetidos [j]){
        repeticoes[j]++;
        break;
      } else if (repetidos[j] == -2){
        repetidos[j] = lidos[i];
        break;
      }
    }

    if (lidos[i] < 0 || i >= 19){
      for (k = 0; k < i; k++){
        if (repeticoes[k] != 1 && repetidos[k] != -2){
          printf("O numero %d apareceu %d vezes.\n", repetidos[k], repeticoes[k]);
        }
      }
      break;
    }
  }
  return 0;
}