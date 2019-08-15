#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int saida = 0, num = 0, quant = 0;
	//printf("%d\n", quant);
 
 while (1){

 	saida = scanf("%d", &num);

 	if (saida == EOF){
 		break;
 	} else {
 		quant++;
 		//printf("%d\n", quant);
 	}
 }
	printf("%d\n", quant);

	return 0;
}