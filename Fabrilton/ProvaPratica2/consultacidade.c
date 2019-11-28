#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Tipos.h"


typedef struct nomeABP {
  char nome[30];
  long int linha;
  struct nomeABP * dir;
  struct nomeABP * esq;
} nomeArv;

nomeArv * geraNo (nomeArv * No, TMunicipio * dados, int linha){
  if (No != NULL) {
      if (strcmp(No->nome, dados->nome) > 0) {
          No->dir = geraNo(No->dir, dados, linha);
      } else {
          No->esq = geraNo(No->esq, dados, linha);
      }
  } else {
      No = (nomeArv *) malloc(sizeof(nomeArv));
      strcpy(No->nome, dados->nome);
      No->linha = (long int) linha;
      No->dir = NULL;
      No->esq = NULL;
  }
  return No;
}

nomeArv * geraArv (nomeArv * arv){
  FILE *arq = fopen("CidadesBR.txt", "r");

  if (arq == NULL) {
      return NULL;
  }

  int aux = 0;
  TMunicipio dados;

  while (leregistro(arq, aux, &dados)) {
      arv = geraNo(arv, &dados, aux);
      aux++;
  }

  return arv;
}

void Imprime(nomeArv * arv) {

  FILE *arq = fopen("CidadesBR.txt", "r");

  int linha = (int) arv->linha;
  TMunicipio dados;

  if (leregistro(arq, linha, &dados)) {
      printf("%ld %s %s %s %ld %s", dados.codg, dados.UF, dados.nome, dados.regiao, dados.pop, dados.porte);
  }

  printf("\n");
}

void ordenaPorNome(nomeArv * arv) {
  if (arv->esq != NULL) {
      ordenaPorNome(arv->esq);
  }

  /*FILE *arq = fopen("CidadesBR.txt", "r");

  int linha = (int) arv->linha;
  TMunicipio dados;

  if (leregistro(arq, linha, &dados)) {
      printf("%ld %s %s %s %ld %s", dados.codg, dados.UF, dados.nome, dados.regiao, dados.pop, dados.porte);
  }

  printf("\n");*/
  Imprime(arv);

  if (arv->dir != NULL) {
      ordenaPorNome(arv->dir);
  }
}


void relatorioMunicipio(nomeArv * cadastroCidade){

}

void importaDados(nomeArv * cadastroCidade){
  cadastroCidade = geraArv(cadastroCidade);
  if (cadastroCidade != NULL) {
      printf("Os dados foram importados.\n");
  } else {
      printf("Erro\n");
  }
}

int sair(int valor){
  //printf("entrou aqui\n");
  return valor;
  //printf("mas nao saiu\n");
}

int main(){

int valor = 1;
nomeArv * cadastroCidade = NULL;

do{
  printf("\n\tSistema de consulta ao cadastro cidades brasileiras\n\n");
  printf("1. Importar Dados\n");
  printf("2. Relatório ordenado pelo campo Nome\n");
  printf("3. Relatório dos municípios de um Estado\n");
  printf("4. Sair\n\n");

  scanf("%d", &valor);

    switch(valor){
      case 1:
        cadastroCidade = geraArv(cadastroCidade);
        if (cadastroCidade != NULL) {
            printf("Dados importados.\n");
        } else {
            printf("Erro ao abrir o arquivo.\n");
        }
        //importaDados(cadastroCidade);
        break;
      case 2:
        ordenaPorNome(cadastroCidade);
        break;
      case 3:
        //relatorioMunicipio(cadastroCidade);
        break;
      case 4:
        free(cadastroCidade);
        valor = 0;
        sair(valor);
        break;
      default:
        printf("Digite uma opção válida\n");
    }

}while(valor);

return 0;
}

