#include <stdio.h>

int main(void)
{
	int n, i;	
	char frase[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
	scanf("%d", &n);
	for(i = 0; i < n; i++) printf("%c",frase[i]);
	printf("\n");
	return 0;	 
}
