//  1. Faça um procedimento para a alocação de uma árvore binária conforme algoritmo abaixo. A função auxiliar LerProximo() deve sempre retornar o próximo caractere de uma string contendo a representação linear de uma árvore binária (Exs.: “ABG..C.DE.F....”, “273..65..8..5.94...”). Esta string deve ser lida do usuário. Faça ainda um procedimento que imprima os elementos da árvore construída na seguinte ordem pré-fixada à esquerda (Imprime conteúdo do Centro, Vai para a Esquerda e depois para a Direita).
//  2. Faça uma função que retorne a quantidade de elementos (nós) de uma árvore binária.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//typedef struct Dado {
//    char C;
//} dado;

typedef struct ArvBin {
    char Dado;
//    dado * Dado;
    struct ArvBin * Esq;
    struct ArvBin * Dir;
    struct ArvBin * pai;
} AB;

int contador1 = -1;

char LerProximo() {
//    char X;
//    scanf(" %c", &X);
//    return X;
    char X[] = "ABG..C.DE.F....";
    contador1++;
    return X[contador1];
}

AB * AlocaNo () {
    AB *No;
    No = (AB *) malloc(sizeof(AB));
//    No->Dado = (dado *) malloc(sizeof(dado));
    return No;

}

AB * Constroi (AB *No, AB *pai) {
    char dado = LerProximo();
    if (dado == '.') {
        No = NULL;
    } else {
        No = AlocaNo();
        No->Dado = dado;
//        No->Dado->C = dado;
        No->pai = pai;
        No->Esq = Constroi(No->Esq, No);
        No->Dir = Constroi(No->Dir, No);
    }
    return No;
}

void impriAesq (AB *No) {
    if (No != NULL) {
        if (No->pai == NULL) {
            printf("Nó raiz: ");
        }
        printf("%c\n", No->Dado);
//        printf("%c\n", No->Dado->C);

        if (No->Esq == NULL) {
            printf("%c não possui filho a esquerda", No->Dado);
        } else {
            printf("Filho da esquerda de %c: ", No->Dado);
        }
        impriAesq(No->Esq);

        if (No->Dir == NULL) {
            printf("%c não possui filho a direita", No->Dado);
        } else {
            printf("Filho da direita de %c: ", No->Dado);
        }
        impriAesq(No->Dir);
    } else {
        printf("\n");
    }
}

// questão 2
int tamanho (AB *No) {
    int qtd = 0;
    if (No != NULL) {
        qtd++;
        qtd += tamanho(No->Esq);
        qtd += tamanho(No->Dir);
    }
    return qtd;
}

int main(int argc, const char * argv[]) {
    AB *arvore = NULL;
    arvore = Constroi(arvore, NULL);
    impriAesq(arvore);
    printf("\n%d\n", tamanho(arvore));
    return 0;
}
