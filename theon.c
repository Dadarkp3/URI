#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, i, menor, resposta, entrada;
	scanf("%d", &n);
	scanf("%d", &entrada);
	menor = entrada;
	resposta = 1;
	for(i = 2; i <= n; i++)
	{
		scanf("%d", &entrada);
		if (entrada < menor)
		{
			menor = entrada;
			resposta = i;
		}
	}
	printf("%d\n", resposta);



}
