#include <stdio.h>
#include <stdlib.h>

int main( ) {
	double reais;
	int cedulas, centavos;
	scanf("%lf", &reais);
	cedulas = reais;
	centavos = (reais-cedulas) * 100;
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cedulas / 100);
	cedulas = cedulas % 100;
	printf("%d nota(s) de R$ 50.00\n", cedulas / 50);
	cedulas = cedulas % 50;
	printf("%d nota(s) de R$ 20.00\n", cedulas / 20);
	cedulas = cedulas % 20;
	printf("%d nota(s) de R$ 10.00\n", cedulas / 10);
	cedulas = cedulas % 10;
	printf("%d nota(s) de R$ 5.00\n", cedulas / 5);
	cedulas = cedulas % 5;
	printf("%d nota(s) de R$ 2.00\nMOEDAS:\n", cedulas / 2);
	cedulas = cedulas % 2;
	centavos += (cedulas * 100); 
	printf("%d moeda(s) de R$ 1.00\n", centavos / 100);
	centavos = centavos % 100; 
	printf("%d moeda(s) de R$ 0.50\n", centavos / 50);
	centavos = centavos % 50;
	printf("%d moeda(s) de R$ 0.25\n", centavos / 25);
	centavos = centavos % 25;
	printf("%d moeda(s) de R$ 0.10\n", centavos / 10);
	centavos = centavos % 10;
	printf("%d moeda(s) de R$ 0.05\n", centavos / 5);
	centavos = centavos % 5;
	printf("%d moeda(s) de R$ 0.01\n", centavos);  	
	return 0;
	
}
