/*Ponteiros e vetores

int b[5]

b = [_,_,_,_,_]
     0 1 2 3 4  -> onde os números são as posições

Um vetor é um espaço ~contíguo~ de memória. No exemplo:

- b é um vetor de 5 posições
- b é um ponteiro para o endereço base do vetor

String:
  char c[10] -> para uma string com 10 caracteres
  scanf ("%s", c);
*/

//Trocar valores de uma posição para outra em um vetor

#include <stdio.h>

void trocavetor(int v[], int j){
  int temp;
  temp = v[j];
  v[j] = v [j+1];
  v[j+1] = temp;
}

int main(){
  int i;
  int v[] = {1,2,3,4,5};

  trocavetor(v,3);

  for (int i = 0; i < 5; ++i){
    printf("%d\n", v[i]);
  }
  return 0;
}

