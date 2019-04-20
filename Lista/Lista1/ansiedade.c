#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

  char str1[3] = "sim";
  //char str2[3] = "nao";
  char str3[3];
  int retorno = 0, contador = 0, triagem = 0;

	rEOF = scanf("%c", str3);

  while(1){

  for (int i = 0; i <= 10; i++){
  	 i++;
  	retorno = strcmp(str1, str3);
  	scanf("%c", str3);
  	if (retorno == 0){
  		contador++;
  	}
  }

  if (contador >= 2){
  	triagem++;
  }

  printf("%d\n", triagem);

}
	scanf("%c", str3);
	return 0;
}