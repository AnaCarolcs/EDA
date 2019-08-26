/*1. Se p é um ponteiro para inteiro, explique a diferença entre:
a. p++;

b. (*p)++;

c. *(p++).

2. Qual o valor de y no final do programa? Tente primeiro descobrir e depois verifique no computador o
resultado. A seguir, escreva um comentário em cada linha de comando em negrito explicando o que ele faz
e o valor da variável após a execução.
#include <stdio.h>
int main(){

  int y, *p, x;

  y = 0;
  p = &y;
  x = *p;
  x = 4;

  (*p)++;
  x--;

  (*p) += x;

  printf ("y = %d\n", y);

return(0);
}
*/

/*
3. Explique o que faz o programa abaixo.
#include<stdio.h>
main(){

  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;

  f = vet;

  printf("contador/    valor    /   valor     /     endereco    /   endereco");

  for(i = 0 ; i < 5 ; i++){
  printf("\ni = %d",i);
  printf(" vet[%d] = %.1f",i, vet[i]);
  printf(" *(f + %d) = %.1f",i, *(f+i));
  printf(" &vet[%d] = %X",i, &vet[i]);
  printf(" (f + %d) = %X\n",i, f+i);
  }
}
*/

/*
4. O que será impresso pelo programa abaixo?
#include <stdio.h>
#include <stdlib.h>

int main (void){

  int i = 10, j = 20;
  int temp;
  int *p1 , * p2 ;

  p1 = &i;
  p2 = &j;
  temp = *p1;
  *p1 = *p2;
  *p2 = temp;

  printf ("%d %d \n" , i , j );

return 0;
}
*/

/*
5. Faça um programa que leia o faturamento de 4 empresas, armazene-os no vetor vfat e imprima os valores em ordem inversa de leitura com os respectivos endereços de memória.

#include<stdio.h>
#include<vector>

int main(){

  float vfat[4];
  float fat;

  for (int i = 0; i < 4; ++i){
    scanf("%f", vfat[i]);
  }

  for(int i = 0; i < 4; ++i){
    std::swap(vfat[i], vfat[5 - i -1]);
    printf("v[%d] = %f / endereco: %X\n", i, vfat[i], &vfat[i]);
  }

  return 0;
}
*/

/*
6. Refaça o programa anterior utilizando um ponteiro para varrer o vetor. Ou seja, não acessar os elementos utilizando os índices do vetor.
#include<stdio.h>
#include<vector>

void swap(int *i, int *j){
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
}

int main(){

  int vfat[4];
  //float fat;

  for (int i = 0; i < 4; ++i){
    scanf("%f", vfat[i]);
  }

  for(int i = 0; i < 4; ++i){
    swap(&vfat[i], &vfat[5 - i -1]);
    printf("v[%d] = %d / endereco: %X\n", i, vfat[i], &vfat[i]);
  }

  return 0;
}
*/

/*
7. O programa abaixo deve ler o nome completo de uma pessoa e imprimir apenas os sobrenomes. Complete a função achaSobrenome para que o programa fique correto.
#include < stdio .h >

char * acheSobrenome (char nome []){
  char * pnome;
  int i = 0;
  while ( nome [ i ] != ' '){
    i ++;
  }
  i ++;
  pnome = //COMPLETE AQUI

  return pnome;
}

int main (void){
  char nomeCompleto [80];
  char *p ;

  puts ( "Entre com o seu nome e um sobrenome:" );
  gets (nomeCompleto);

  p = acheSobrenome (nomeCompleto);

  puts ( p );

  return 0;
}

*/

/*
8. 2.Os trechos de códigos abaixo possuem erros. Identifique-os e corrija-os.
void main(){

  int x, *p;
  x = 100;
  p = x;

  printf(“Valor de p: %d.\n”, *p);
}

void troca (int *i, int *j){
  int temp;
  temp = *i;
  *i = *j;
  *j = temp;
}

*/

/*
9. Suponha que os elementos do vetor v são do tipo int e cada int ocupa 8 bytes na memória. Se o endereço de
v[0] é 55000, qual o valor da expressão v + 3?
*/

/*
10. Suponha que v é um vetor. Descreva a diferença conceitual entre as expressões v[3] e v + 3.
*/