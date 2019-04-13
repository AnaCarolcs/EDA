#include <stdio.h>

int main(){

  int var;
  char *ptr;

  ptr = &var;

  ptr[0] = 's';
  ptr[1] = 'o';
  ptr[2] = 'l';
  ptr[3] = '\0';

  printf("%s ... var = %d\n\n", (char *) ptr, var);

  var = var - 3584;

  printf("%s ... var = %d\n\n", (char *) ptr, var);

  return 0;
}