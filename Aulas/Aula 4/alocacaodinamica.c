/*Alocação dinâmica de memória

É uma importante aplicação de ponteiros. A função malloc(do inglês memory allocation) aloca espaço para um bloco de bytes na memória RAM e devolve um ponteiro para o endereço base desse bloco. O número de bytes a ser alocado é o argumento da função.

Exemplo:  char *ptr;
          ptr = malloc(1); //Onde 1 é a quantidade de byte alocada na memória
          scanf("%c", ptr);

Há duas formas de alocar memória:
- Estática: declaração das variável:
            char c;
  (Não confundir com o modificador static do C)
- Dinâmica: Usando ponteiros, como no exemplo supracitado.

- Diferenças:
    #Estática o endereço é reservado em tempo de compilação;
    #Dinâmica o endereço é reservado em tempo de execução;

A função malloc retorna um ponteiro para void.
Com isso, podemos verificar se a alocação deu certo.

        char *ptr;
        ptr = malloc(1);
        if(ptr == null){
          printf("Erro\n")
          exit(EXIT_FAILURE);
        }

Obs:1- 'exit' é uma função que termina imediatamente a execução do programa (mata o programa) e fecha todos os arquivos que porventura estajam abertos. Recebe o código de saída como argumento:
        # EXIT_SUCCESS: indica sucesso e geralmente vale 0;
        # EXIT_FAILURE: indica falha e geralmente vale 1;
    2- Usar 'exit' equivale a usar 'return' no main.
    3- Para usar 'malloc' e as constantes de exit, é necessário incluir a biblioteca 'stdlib.h'
        # "#include<stdlib.h>"

Ao final do uso da memória alocada, libera-se o espaço alocado usando a função:

        free(ptr);


*/

//Exemplo 01 VETOR

#include<stdio.h>
#include<stdlib.h>

int main(){
  int i, n;
  double *v;
  double soma;

  scanf("%d", &n);

  v = malloc( n * sizeof(int));

  if(v == NULL){
    printf("Erro na alocação de memoria\n");
    return 1;
  }

  for (int i = 0; i < n; ++i){
    scanf("%lf", &v[i]);
  }

  soma = 0;

  for (int i = 0; i < n; ++i){
    soma += v[i];
  }

  printf("Media = %lf\n", soma / n);

  free(v);

  return 0;
}


//Exemplo 02 (MATRIZ)

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  int **matriz;
  int i, j, m, n;

  scanf("%d %d", &m, &n);
  matriz = malloc( m * sizeof(int *));
  if (matriz == NULL){
    printf("Erro de alocação\n");
    return 1;
  }

  for (int i = 0; i < m; ++i){
    matriz[i] = malloc(n * sizeof(int));
    if (matriz[i] == NULL){
      printf("Erro de alocação\n");
      return 1;
    }
  }

  srand(time(NULL));
  for (int i = 0; i < m; ++i){
    for (int j = 0; j < n; ++j){
      printf("%3d\n", matriz[i][j]);
    }
    printf("\n");
  }

  for (int i = 0; i < m; ++i){
    free(matriz[i]);
  }

  free (matriz);

  return 0;
}


// Exemplo 03  PASSANDO UMA FUNÇÃO COMO PARÂMETRO

#include <stdio.h>
#include <stdlib.h>

int maior(int a, int b){
  return a>b;
}

int menor(int a, int b){
  return a<b;
}

void minmax(int n, int *v, int (*compara)(int a, int b)){
  int i, elem;
  elem = v[0];
  for (int i = 0; i < n; ++i){
    if((*compara)(v[i], elem)){
      elem = v[i]
    }
  printf("elem %d\n", elem);
  }
}

int main (){
  int v[5] = {5, 2, 4, 8, 6}

  minmax(5, v, maior);
  minmax(5, v, menor);

  return 0;

}