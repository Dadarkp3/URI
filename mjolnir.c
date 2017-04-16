#include <stdio.h>

int main(void)
{
	char N[1000];
	int valor, i, num;
	scanf("%d", &num);
	do
	{	
		scanf("%s %d", N, &valor);
		if(N[0] == 'T' && N[1] == 'H' && N[2] == 'O' && N[3] == 'R' && N[4] == '\0') printf("Y\n");
		else printf("N\n");
		num--;
	}
	while(num > 0);
	return 0;
}
