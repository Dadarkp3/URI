#include <stdio.h>

int main(){ 
	int numfuncionario, horas;
	double valor, salario;
	scanf("%d %d %lf",&numfuncionario,&horas,&valor);
	salario=(horas*valor);
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n",numfuncionario,salario); 
	return 0;
}
