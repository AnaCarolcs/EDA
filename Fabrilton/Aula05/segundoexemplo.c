#include<stdio.h>
//#include “funcoes.c”

float quadrado(int pnum){
  return pnum*pnum;
}

float cubo(int pnum){
  return pnum*pnum*pnum;
}

float AplicaF(int n, float (*f) (int k)){
  int ptermo;
  float psoma = 0;
  for(ptermo=1; ptermo<=n; ptermo++);
    psoma += f(ptermo);
  return psoma;
}

void main(){

  float psq, psc;
  psq = AplicaF(5,quadrado);
  psc = AplicaF(5,cubo);

  printf("Soma dos quadrados: %f\n",psq);
  printf("Soma dos cubos: %f\n",psc);

}