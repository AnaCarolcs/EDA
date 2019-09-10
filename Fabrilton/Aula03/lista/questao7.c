/*
7. Fazer um algoritmo que

a. Leia n valores numéricos e os armazene num arranjo unidimensional v. O valor de n também deve
ser lido.
b. Calcule e exiba o valor da série:

Onde v # é o i-ésimo valor armazenado na variável v.
c. Calcule e exiba quantos termos da série têm o numerador inferior ao denominador.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *v, n=0, i=0, cont=0;
    float S=0;

    scanf("%d", &n);
    v = (int *)malloc(n*sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", v + i);
    }

    for (i = 0; i < n; i++) {
        S += (float) (i + 1)/(v[i]);
    }
    printf("%.2f\n", S);

    for (i = 0; i < n; i++) {
        if (i + 1 < v[i]) {
            cont++;
        }
    }
    printf("%d\n", cont);
    free(v);

    return 0;
}
