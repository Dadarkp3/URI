#include <stdio.h>

int main(){
	int distancia;
	double combustivel, total;
	scanf("%d %lf",&distancia,&combustivel);
	total=distancia/combustivel;
	printf("%.3lf km/l\n",total);
	return 0;
}
