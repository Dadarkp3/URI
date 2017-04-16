#include <stdio.h>
#define MAX 10000

void quickSort(int *vetor, int esquerda, int direita)
{
    int i, j, x, y;
    i = esquerda;
    j = direita;
    x = vetor[(esquerda + direita) / 2];

    while(i <= j)
    {
        while(vetor[i] < x && i < direita)
        {
            i++;
        }
        while(vetor[j] > x && j > esquerda)
        {
            j--;
        }
        if(i <= j)
        {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    }
    if(j > esquerda)
    {
        quickSort(vetor, esquerda, j);
    }
    if(i < direita)
    {
        quickSort(vetor,  i, direita);
    }
}

int verificaMeio(int *vetor, int meio){ //verifica se o numero anterior é igual a chave
    while(vetor[meio] == vetor[meio-1] && meio > 1){
        meio--;
    }
    return meio;
}

int buscaBinaria (int chave, int *vetor, int esquerda, int direita)
{ 
	int meio = (esquerda + direita)/2;	
	if (vetor[meio] == chave){
		return verificaMeio(vetor, meio);	
		}	
	if (direita <= esquerda)
		return -1;	
	else if (vetor[meio] < chave)
		buscaBinaria(chave, vetor, esquerda+1, fim);
	else
		buscaBinaria(chave, vetor, inicio, fim-1);
}

int main(){
	int n=-1, q=-1, chave, i, posicao, voltas=0;
	int marmore[MAX];
	int busca[65];
	scanf("%d %d", &n, &q);
	while(n != 0 && q != 0)
	{
		voltas++;
		for(i = 1; i <= n; i++)
			scanf("%d", &marmore[i]);
		quickSort(marmore, 1, n);
		for(i = 1; i <= q; i++)
			scanf("%d", &busca[i]);
		printf("CASE# %d:\n",voltas);
		for(i = 1; i <= q; i++)
		{
			chave = busca[i];
			posicao = buscaBinaria(chave, marmore, 1, n);
			if (posicao > 0) printf("%d found at %d\n", chave, posicao);
			else printf("%d not found\n", chave);
		}
		scanf("%d %d", &n, &q);		
	}
	printf("\n");
	return 0;
		
} 
