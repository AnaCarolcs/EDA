#include <stdio.h>

int main(){

	double salario, percentual, aumento, nSalario;

/*
	scanf("%.2lf", salario);
	scanf("%.2lf", percentual);
*/
	scanf("%.2lf, %.2lf", salario, percentual);

	aumento = salario * (percentual / 100);

	nSalario = salario + aumento;

	printf("%.2lf %.2lf\n", &aumento, &nSalario);

	return 0;
}