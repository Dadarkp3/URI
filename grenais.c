#include <stdio.h>
#include <stdlib.h>

int main()
{
	int inter, gremio, grenal = 0, flag = 1, empate = 0, venceuinter = 0, venceugremio = 0;
	do
	{
		scanf("%d %d",&inter, &gremio);
		grenal++;
		if (inter > gremio) venceuinter++;
		else if (inter < gremio) venceugremio++;
		else empate++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&flag);
	}
	while(flag == 1);
	printf("%d grenais\n", grenal);
	printf("Inter:%d\n",venceuinter);
	printf("Gremio:%d\n",venceugremio);
	printf("Empates:%d\n",empate);
	if (venceuinter > venceugremio) printf("Inter venceu mais\n");
	else if (venceuinter < venceugremio) printf("Gremio venceu mais\n");
	else printf("Não houve vencedor\n");
	
}
