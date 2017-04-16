#include <stdio.h>
#include <stdlib.h>

int main() {
	float media= 0.0, soma=0.0, cont=0.0,  i=1.0;
	scanf("%f", &i);
	//for (i=0;i>=0; cont++) {
	while (i>0.0) {
		soma= soma + i;
		cont= cont +1;
		scanf("%f", &i);
	}
	media= ((soma)/(cont));
	printf("%.2f\n", media);
	return 0;
}
