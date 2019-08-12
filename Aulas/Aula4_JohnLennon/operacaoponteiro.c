/*
int b[5]
int *bPtr
bPtr = b;
bPtr[0]

    //bPtr = bPtr + 2 * sizeOf(int);

          posição ->   0     1     2     3    4
           Vetor b->[  1,    2,    3,    4,   5]
Espaço da memória ->1000, 1004, 1008, 1012, 1016


*/

#include <stdio.h>

int main(){
  int b[5] = {1,2,3,4,5};
  int *bPtr;
  int i;

  bPtr = b;
  *(bPtr + 2) += 10;
  bPtr = bPtr + 2;

  for (int i = 0; i < 5; ++i){
    printf("b[%d] = %d\n", i, b[i]);
  }

  printf("\n");

  for (int i = 0; i < 5; ++i){
    printf("bPtr[%d] = %d\n", i, bPtr[i]);
  }

  return 0;
}