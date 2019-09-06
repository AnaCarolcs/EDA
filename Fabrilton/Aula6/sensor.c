#include<stdio.h>

float media(float vetor[]){
  float medias[300];
  for(int i = 1; i < 299; i++){
      medias[i] = (vetor[i-1] + vetor[i] + vetor[i+1])/3;
  }
  return
}

void alerta(float vetor[]){

}


int main(){

  float sensores[300];
  int janela = 1;

  srand(1);

  for (int i = 0; i < 300; ++i){
    sensores[i] = rand() %300;
  }

  media(sensores);

  alerta(media);

return 0;
}