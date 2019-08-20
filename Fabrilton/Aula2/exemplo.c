#include <stdio.h>

/*void main(){

int n = 75;
int *ptr_n;
ptr_n = &n;

printf("O valor da variável n é %d e seu endereço é %x\n", n, &n);
printf("O endereço apontado pelo ponteiro ptr_n é %x e o valor do conteúdo deste endereço é %d\n", ptr_n, *ptr_n);

}*/

void main(){

  int lista[5] = {10, 20, 30, 40, 50};
  int i = 0;

  printf("Valor da posição %d do endereço %x é igual a %d\n",i, (lista+i), *(lista+i) );

  printf("Valor da posição %d do endereço %x é igual a %d\n",i+1, (lista+i+1), *(lista+i+1) );

  //printf("%d\n", lista[3]);

}

