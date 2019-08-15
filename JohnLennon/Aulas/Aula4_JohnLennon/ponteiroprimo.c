/**/

#include <stdio.h>

void primos (int v[]){

  v[0] = 1009;
  v[1] = 1013;
  v[2] = 1019;
}

int main(){

int ptr[3];

primos(ptr);

for (int i = 0; i < 3; ++i){
  printf("Posição %d: %d\n", i, ptr[i]);
}

return 0;

}