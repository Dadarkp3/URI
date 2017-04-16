#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int gritos = 0, soma = 0; 
	char corvos[7];
	do
	{
		fgets(corvos, 7, stdin);
		if(corvos[0] == 'c')
		{
			gritos++;
			printf("%d\n", soma);
			soma = 0;
		}
		else
		{
                         if(corvos[0] == '*') soma += 4;
                         if(corvos[1] == '*') soma += 2;      
                         if(corvos[2] == '*') soma++;     
		}
	}
	while(gritos < 3);
	return 0;
}
