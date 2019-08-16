#include <stdio.h>
#include <stdlib.h>

int vet[5];
int count;

void adicionar(){
  int num = 0;
  printf("Qual número inserir? \n");
  scanf("%d", &num);
  if (count >= 5){
    printf("Vetor cheio\n");
    return;
  } else {
    vet[count++] = num;
  }
}

void excluir(){
  int num = 0;
  printf("Qual número excluir?\n");
  scanf("%d", &num);
  if(num >= count){
    printf("Posicao indisponível\n");
    return;
  } else {
    int vetAux[5];
    memcpy(vetAux, vet,sizeof(int));
    for(int k=0;k<count;k++){
      if(k!=num) vet[k] = vetAux[k];
    }
    count--;
  }
}

void consultar(){
  return;
}

void exibir(){
  for(int k = 0; k<5;k++){
    printf("%d ", vet[k]);
  }
}

int main(){

  int resposta;

  int d = 1;

  while (d == 1) {

  printf("O que vc deseja fazer? \n(1) Adicionar \n(2) Excluir \n(3) Encontrar\n(4) Exibir\n");
  scanf("%d", &resposta);


    switch (resposta){
      case 1: //adicionar
        adicionar();
        break;
      case 2: //excluir
        excluir();
        break;
      case 3: //consultar
        consultar();
        break;
      case 4:
        exibir();
        break;
      default:
        return 0;
    }

  }
return 0;
}