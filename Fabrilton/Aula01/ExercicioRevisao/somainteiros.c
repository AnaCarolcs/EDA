#include <stdio.h>
#include <stdlib.h>

int CalculaIntervalo(int a, int b){
    int soma = 0, i;

    for(i = a; i <= b; i++){
        soma += i;
    }
    return soma;
}

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    if(num1 < num2){
        printf("%d\n",CalculaIntervalo(num1, num2));
    }
    else{
        printf("%d\n",CalculaIntervalo(num2, num1));
    }

    return 0;
}