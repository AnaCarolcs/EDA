/*1. Retifique os algoritmos abaixo para considerar os casos em que a lista de entrada possa estar vazia.
a. TNo *IncluiCabeca(TNo *pLista, int pValor)
b. TNo *IncluiCalda(TNo *pLista, int pValor)
c. TNo *ExcluiCabeca(TNo *pLista)
d. TNo *ExcluiCalda(TNo *pLista)C
*/

#include <stdio.h>
#include <stdlib.h>

struct TNo{
    struct TNo *Ant;
    int Numero;
    struct TNo *Prox;
};

struct TNo *IncluiCabeca(struct TNo *pLista, int pValor){
    struct TNo *pNovoNo;
    pNovoNo = (struct TNo *) malloc(sizeof(struct TNo));
    pNovoNo->Numero = pValor;
    pNovoNo->Ant = NULL;
    pNovoNo->Prox = pLista;
    pLista->Ant = pNovoNo;
    pLista = pNovoNo;
    return pLista;
}

struct TNo *IncluiCalda(struct TNo *pLista, int pValor){
    struct TNo *pNovoNo, *pAux;
    pNovoNo = (struct TNo *) malloc(sizeof(struct TNo));
    pNovoNo->Numero = pValor;
    pNovoNo->Prox = NULL;
    pAux = pLista;
    while (pAux->Prox != NULL)
        pAux = pAux->Prox;
    pAux->Prox = pNovoNo;
    pNovoNo->Ant = pAux;
    return pLista;
}

struct TNo *ExcluiCabeca(struct TNo *pLista, int n){
    pLista = pLista->Prox;
    free(pLista->Ant);
    pLista->Ant = NULL;
    return pLista;
}

struct TNo *ExcluiCalda(struct TNo *pLista, int n){
    struct TNo *pAux;
    pAux = pLista;
    while (pAux->Prox->Prox != NULL)
        pAux = pAux->Prox;
    free(pAux->Prox);
    pAux->Prox = NULL;
    return pLista;
}

void imprLista (struct TNo *pLista) {
    struct TNo *pAux;
    pAux = pLista;
    if (pAux == NULL) {
        printf("lista vazia");
    } else {
        while (pAux != NULL) {
            printf("%d ", pAux->Numero);
            pAux = pAux->Prox;
        }
    }
    printf("\n");
}

int main() {
    struct TNo *lista = NULL, * (* funcao[4]) (struct TNo *, int);//, x, y
    //int i=0;

//    lista = &x;
//    lista->Numero = 42;
//    lista->Prox = &y;
//    lista->Prox->Numero = 390;
//    lista->Prox->Prox = NULL;

    funcao[0] = IncluiCabeca;
    funcao[1] = IncluiCalda;
    funcao[2] = ExcluiCabeca;
    funcao[3] = ExcluiCalda;

    for (int i = 0; i < 4; i++) {
        lista = funcao[i] (lista, 7);
        imprLista(lista);
        lista = NULL;
    }

    return 0;
}
