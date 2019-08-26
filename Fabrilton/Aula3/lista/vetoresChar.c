/*
Seja pvetcarum vetor não ordenado contendo valores do tipo char; ptammax, um valor inteiro indicando a quantidade de elementos alocados em pvetcare pqtde, um valor inteiro indicando a quantidade atual de elementos em pvetcar. Escreva as funções solicitadas abaixo considerando que pvetcar, ptammaxe pqtde sejam parâmetros de entrada das mesmas:

a.Faça uma função que receba um caracter e o inclua na primeira posição disponível de pvetcar;

b.Faça uma função que receba um caracter e o exclua de pvetcar;
*/

#include <stdio.h>

void incluir(char pvetcar[], int ptammaxe, int pqtde){
  for (int i = 0; i < ptammaxe; ++i){
    char letra;
    scanf("%c", &letra);
    pvetcar[i] = letra;
  }
}

void deletar(char pvetcar[], int ptammaxe, int pqtde){

}

int main(){

  int ptammaxe, pqtde;
  char pvetcar[pqtde];

  incluir(pvetcar, ptammaxe, pqtde);
  deletar(pvetcar, ptammaxe, pqtde);

  return 0;
}