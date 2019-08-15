//f91

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int result;
int n = 0;

int f91(int n){
	if(n <= 100){
		result = f91(f91(n+11));
		return result;
	} else if (n >= 101){
		result = n - 10;
		return result;
	} 
}

int main() {

	while(1){

		scanf("%d", &n);

		if (n !=0){
		f91(n);
		printf("f91(%d) = %d\n", n, result);
} else {
	return 0;
	}
}

}