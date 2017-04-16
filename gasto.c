#include <stdio.h>

int main(){
	int horas, velocidade;
	double total;
	scanf("%d %d",&horas,&velocidade);
	total=(horas*velocidade)/12.0;
	printf("%.3lf\n",total);
	return 0;
}
