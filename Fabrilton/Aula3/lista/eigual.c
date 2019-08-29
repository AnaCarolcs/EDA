/*
6. Faça uma função EIgual que receba os parâmetros abaixo:

a. Dois vetores pveta e pvetb do tipo inteiro;
b. Dois valores inteiros ptama, ptamb, indicando as quantidades de elementos de veta e vetb;

EIgual deve retornar Verdadeiro se pveta for igual a pvetb (ambos tiverem a mesma qtde de elementos e
todos elementos iguais) ou Falso, caso contrário.
*/

#include <stdio.h>
#include <stdlib.h>

int MAX = 5;

int ler (int *vetor){
    int i=0;
    printf("Digite -1 depois do último elemento\n");
    do {
        scanf("%d", &vetor[i]);
        i++;
    } while (vetor[i - 1] != -1);
    return i - 1;
}

int EIgual (int *avet, int ta, int *bvet, int tb){
    int a=0;
    if (ta != tb) {
        return 0;
    } else {
        for (a = 0; a < ta; a++) {
            if (avet[a] != bvet[a]) {
                return 0;
            }
        }
    }
    return 1;
}

void imprimir (int *vetor){
    int j=0;
    while (vetor[j] != -1) {
        printf("%d ", vetor[j]);
        j++;
    }
    printf("\n");
}

int main() {
    int *pveta, *pvetb, ptama=0, ptamb=0;
    pveta = (int *)calloc(MAX, sizeof(int));
    pvetb = (int *)calloc(MAX, sizeof(int));

    ptama = ler(pveta);
    ptamb = ler(pvetb);

    if (EIgual(pveta, ptama, pvetb, ptamb)) {
        printf("Verdadeiro");
    } else {
        printf("Falso");
    }
    printf("\n");

    imprimir(pveta);
    imprimir(pvetb);

    free(pveta);
    free(pvetb);

    return 0;
}
