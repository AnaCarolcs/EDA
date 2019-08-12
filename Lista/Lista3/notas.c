/*Notas
O professor Arquimedes precisa da sua ajuda para descobrir qual é a nota mais frequente entre as notas que os alunos dele tiraram na última prova. A turma tem N alunos e seu programa deve imprimir a nota que aparece mais vezes na lista de N notas. Se houver mais de uma nota mais frequente, você deve imprimir a maior delas! Por exemplo, se a turma tiver N = 10 alunos e as notas forem [20, 25, 85, 40, 25, 90, 25, 40, 55, 40], as notas mais frequentes são 25 e 40, ocorrendo três vezes cada. Seu programa, então, deve imprimir 40.

Entrada
A entrada consiste de duas linhas. A primeira linha contém um número inteiro N , o número de alunos na turma. A segunda linha contém N inteiros, que é a lista de notas dos alunos.

Saída
Seu programa deve imprimir apenas uma linha contendo apenas um número, a nota mais frequente da lista.

Restrições
1 ≤ N ≤ 200
O valor de todas as notas é um inteiro entre 0 e 100, inclusive */

#include <stdio.h>
#include <string.h> //para usar o memset()

int main (){

  int n = 0, count;
  int notas[200];
  int guardaVezes[100];

  for (int i = 0; i < 3; ++i){
      scanf("%d", &notas[i]);
    }

  /*for (int j = 0; j < 5; ++j){
    printf("Vetor [%d]: %d\n", j, notas[j]);
  }*/

  for (int j = 0; j < 3; ++j){
    for (int k = j + 1; k < 3; ++k){
      if (notas[j] == notas[k]){
          printf("%d é igual a %d\n", notas[j], notas[k]);
          count++;
      }
    }
  }

  printf("%d\n", count);

  return 0;
}