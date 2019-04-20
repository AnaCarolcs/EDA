//Torre de Hanoi 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count = 0;

int hanoi(int n){

	if (n == 1) {
		count = 1;
	} else {
		count =  2 * hanoi(n -1) +1;
	}

/*
	if (n == 1) {
		//Mover o menor disco do pino origem para o pino destino
		count += 1;
	} else {
		hanoi(n-1);
		//mover o n-esimo menor disco do pino origem para o pino destino
		hanoi(1);
		hanoi(n-1);
	}
*/
}

int main(){
	
	int n;
	int i = 1;

	while(1){

		scanf("%d", &n);
		if (n != 0){
		count = 0;
		hanoi (n);

		printf("Teste %d\n", i);
		printf("%d\n", count);
		printf("\n");

		i++;
	}
		else {
			return 0;
		}
	}
}
