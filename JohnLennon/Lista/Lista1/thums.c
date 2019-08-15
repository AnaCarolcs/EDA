#include <stdio.h>

int main (){

	int n, i = 1;

	scanf("%d/n", &n);

	while (n >= i){
		if(i % 2 == 0){
			printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");	
		} else {
			printf("THUMS THUMS THUMS\n");
		}
		
		i++;
	}

	return 0;
}