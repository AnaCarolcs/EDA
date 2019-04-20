#include <stdio.h>
#include <stdlib.h>

int main (){

	int vezes = 0, result = 0, i = 0, beto = 0, alice = 0;

	while (1){

	scanf("%d\n", &vezes);

	beto = 0, alice = 0;

	if (vezes == 0){
	break;
	} else {
		for (i = 1; i <= vezes; i++){
		scanf("%d", &result);
		if (result == 1){
			beto++;
		} else {
			alice++;
		} 
		//printf("%d\n", i);	
	}
	printf("Alice ganhou %d e Beto ganhou %d\n", alice, beto );
 }

}


return 0;
}