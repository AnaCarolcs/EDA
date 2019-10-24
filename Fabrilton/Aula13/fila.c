/*Funções elementares de uma fila:
A.void Esvazia(TFila *Fila): Esvaziar a fila;
B.bool Vazia(TFila *Fila): Verificar se a fila está vazia ou não;
C.bool Cheia(TFila *Fila): Verifica se a fila está cheia; //Caso de implementação com vetores
D.bool Enfileira(TFila *Fila, TElemento *Elemento): Enfileira um elemento no final da fila;
E.TElemento *Desenfileira(TFila *Fila): Desenfileira (remove) um elemento do início da fila – esta função retorna o elemento desenfileirado;
F. TElemento *Consulta(TFila *Fila): Retorna o elemento do início da fila sem removê-lo;
L. Considere a tarefa de implementar uma fila de processos para um sistema operacional.

Considerando que um processo é identificado por um identificador inteiro único, implemente as funcionalidades (em forma de menu de opções) para a manipulação da fila de processos (enfileirar novo processo e desenfileirar a fila) com as seguintes implementações:
a. Utilizando vetor circular com tamanho 5;
b. Utilizando lista simplesmente encadeada;
c. Utilizando lista duplamente encadeada com descritor (que indica inicio e final da fila).
Obs.: Sua solução deve considerar as condições de contorno do problema: fila cheia e fila vazia sempre que necessário.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
    int valor;
}TElemento;

typedef struct Node {
    TElemento valor;
    Node* prox;
}TNode;

typedef struct Fila {
    int tamanho;
    Node* primeiro;
    Node* ultimo;
}TFila;

void esvaziar(TFila *Fila){

}

bool vazia(TFila *fila){
  if(fila->tamanho == 0)
    return true;
  else false;
}

/*bool cheia(TFila *Fila){
  if(fila->tamanho == 0)
    return false;
  else return true;
}*/

bool enfileira(TFila *fila, TElemento *elemento){
  TNode *novono;
  if(novono = (TNode*)malloc(sizeof(TNode)) == NULL){
          return false;
  }
  novono->valor = elemento;
  novono->prox = NULL;
  if (fila->tamanho == 0) {
        fila->primeiro = novono;
        fila->ultimo = novono;
    } else {

    }
  fila->tamanho++;
  return true;
}

TElemento *desenfileira(TFila *Fila){
  return elemento;
}

TElemento *consulta(TFila *Fila){
  return elemento;
}

int main(){


  return 0;
}
