#include <stdio.h>
#include <stdlib.h>

int main( ) {
	float n1, n2, n3, n4, media1, n5, media2;
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	media1 = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
	printf("Media: %.1f\n", media1);
	if (media1 >= 7){
		printf("Aluno aprovado.\n");
	} else{
		if(media1 < 5) printf("Aluno reprovado.\n"); 
			else{
				printf("Aluno em exame.\n");
				scanf("%f", &n5);
				media2 = (media1 + n5) / 2;
				printf("Nota do exame: %.1f\n", n5);
				if (media2 > 5) printf("Aluno aprovado.\nMedia final: %.1f\n", media2); else
					printf("Aluno reprovado.\nMedia final: %.1f\n", media2);
				}  	
	} 
	return 0;
}
