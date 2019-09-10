/*
1.Crie uma biblioteca em linguagem C chamada VetoresC.c com as seguintes funções/procedimentos:

a.Função CriaVetIntpara alocação de vetores do tipo int. Esta função deverá receber a quantidade de elementos do vetor e retornar o ponteiro para o vetor alocado;

b.Função CriaVetFloat para alocação de vetores do tipo float. Esta função deverá receber a quantidade de elementos do vetor e retornar o ponteiro para o vetor alocado
*/

#include <stdio.h>

int* criaVetInt(int size){
  int *array = (int*) malloc(size* sizeof(int));
  return array;
}

float* criaVetFloat(){
  float *array = (float*) malloc(size* sizeof(float));
  return array;
}

int main(){

  int sizeInt;
  float sizeFloat;

  criaVetInt(sizeInt);
  criaVetFloat(sizeFloat);

  return 0;
}