#include<stdio.h>

void media(float vetor[], float media[]){
  float * medias = calloc(sizeof(float*) * 300);
  for(int i = 1; i < 299; i++){
      medias[i] = (vetor[i-1] + vetor[i] + vetor[i+1])/3;
  }
}

void alerta(float media[], float alerta[]){
  float * alerta = calloc(sizeof(float*) * 300);
  for(int i = 1; i < 299; i++){
      alerta[i] = (media[i-1] + media[i] + media[i+1])/3;
  }
}


int main(){

  float sensores[300], media[300], alerta[300];
  int janela = 1;

  srand(1);

  for (int i = 0; i < 300; ++i){
    sensores[i] = rand() %300;
  }

  media(sensores, media);

  alerta(media, alerta);

return 0;
}