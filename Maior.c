#include <stdio.h>
#include <math.h>

int main(){
	int A,B,C,X,Resultado;
	scanf("%d %d %d",&A,&B,&C);
	X=(A+B+abs(A-B))/2;
	Resultado=(X+C+abs(X-C))/2;
	printf("%d eh o maior\n",Resultado);
	return 0;
}
