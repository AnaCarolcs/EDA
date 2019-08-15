#include <stdio.h>
#include <stdlib.h>

void bubble_sort (int vetor[]) {
    int k, j, aux;

    for (k = 3 - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}

int main(){

  int result, num = 3;

  int vet[num];

    for(int i=0;i<3;i++){
        scanf("%d",&vet[i]);
    }

    bubble_sort(vet);

    result = vet[1] + vet[2];

    printf("%d\n", result);

    return 0;

}