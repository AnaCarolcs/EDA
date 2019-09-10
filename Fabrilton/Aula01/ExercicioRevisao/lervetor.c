#include <stdio.h>
#include <stdlib.h>

int main(){

  int x, num = 10;

  int vet[num];

  scanf("%d\n", &x);

    for(int i=0;i<10;i++){
        scanf("%d",&vet[i]);
        if (vet[i] == x){
          printf("v[%d] ", i);
        }

    }

    printf("\n");

return 0;

}