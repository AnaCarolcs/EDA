//Aula de recursão

#include <stdio.h>
#include <stdlib.h>

int maximo(int n, int v[]){

	int x;
	if(n==1){
		return v[0];
	} else {
		x = maximo(n-1, v);
		if(x<v[n-1]){
			return v[n-1];
		} else {
			return x;
		}
	}
}

//Calcular fatorial

int fatorial(int n){
	if(n == 0){ // Caso base
		return 1;
	} else {
		return n*fatorial(n-1);
	}
}

/* Função recursiva
	- Se a instância for pequena o suficiente
		-- Então resolve-se o problema diretamente
	- Senão
		-- Reduz para uma instância menor;
		-- Resolve para a instância menor;
		-- Usa a solução para resolver a maior; */

//Fibonacci

int fibonacci(int n){
	if (n == 0){
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n - 1) + fibonacci (n - 2);
	}
}