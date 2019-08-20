#include <stdio.h>

void main(){

int n = 75;
int *ptr_n;
ptr_n = &n;

printf("O valor da variável n é %d e seu endereço é %x\n", n, &n);
printf("O endereço apontado pelo ponteiro ptr_n é %x e o valor do conteúdo deste endereço é %d\n", ptr_n, *ptr_n);

}

