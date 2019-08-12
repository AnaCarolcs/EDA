/*Aritmética de ponteiros

Como podemos observar no exemplo, é possível utilizar um ponteiro para realizar operações
aritméticas. Um ponteiro pode ser incrementado (++) ou decrementado (--) e um inteiro pode
ser adicionado a ou subtraído de um ponteiro (usando operadores +, -, += e -=).

Suponha que o ponteiro

  int *ptr;

possua o endereço 3000. O que é retornado pela operação ptr + 2? R: 3008 (o int ocupa 4 bytes na memória, por isso 3000 + 4 + 4 = 3008)

  ptr +/- n = endereço +/- sizeoff(tipo_ptr) * n

*/

#include <stdio.h>

int main(){

  int i, offset;
  int b[] = {10, 20, 30, 40};
  int *bPtr;

  bPtr = b;
  printf("VETOR\n");
  printf("\n\tNotação usamos índices: \n");

  for (int i = 0; i < 4; ++i){
    printf("\t\tb[%d] = %d\n",i, b[i]);
  }

  printf("\n\tNotação usando deslocamento:\n");

  for (offset = 0; offset < 4; ++offset){
    printf("\t\t*(b + %d) = %d\n", offset, *(b+offset));
  }

  printf("\nPONTEIRO\n");

  printf("\n\tNotação usando índices:\n");

  for (int i = 0; i < 4; ++i){
    printf("\t\tbPtr[%d] = %d\n", i, bPtr[i]);
  }

  printf("\n\tNotação usando deslocamento\n");

  for (offset = 0; offset < 4; ++offset){
    printf("\t\t*(bPtr + %d) = %d\n", offset, *(bPtr + offset));
  }

  return 0;
}