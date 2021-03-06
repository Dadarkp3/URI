#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define MAX 100

char converte(int alg){
    switch(alg){
        case 0: return '0';
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
        case 4: return '4';
        case 5: return '5';
        case 6: return '6';
        case 7: return '7';
        case 8: return '8';
        case 9: return '9';
    }
}

int main(void){
	char estados[MAX];
	char alfabeto_linguagem[MAX];
	char alfabeto_pilha[MAX];
	char transicoes[MAX][MAX];
	int i=0, j=0, k=0, z=0;
	char modo;
	char caracter;
	char cadeias[MAX];
	char estados_finais[MAX];
	char flag;
	char cadeia_teste[MAX];
	char transicoes_teste[MAX];
	//leitura dos estados
	do{
		read(0, &caracter, sizeof(char));
		estados[i]=caracter;
		i++;
	}while(caracter !='\n');
	estados[i-1]='\0';
	printf("Estado = %s\n", estados);
	//leitura do alfabeto_linguagem
	i=0;
	do{
		read(0, &caracter, sizeof(char));
		alfabeto_linguagem[i]=caracter;
		i++;
	}while(caracter !='\n');
	alfabeto_linguagem[i-1]='\0';
	printf("alfabeto ling = %s\n", alfabeto_linguagem);
	//leitura do alfabeto_pilha
	i=0;
	do{
		read(0, &caracter, sizeof(char));
		alfabeto_pilha[i]=caracter;
		i++;
	}while(caracter !='\n');
	alfabeto_pilha[i-1]='\0';
	printf("alfabeto pilha = %s\n", alfabeto_pilha);
	//leitura das funções de transição
	i=0;
	j=0;
		do{
		read(0, &caracter, sizeof(char));
		if (caracter=='\n'){
			transicoes[i][j]='\0';
				i++;
				j=0;
			}else{
                transicoes[i][j]=caracter;
                j++;
			}
	}while(caracter !='#');
	int quantidade_transicoes=i;
	transicoes[i][j-1]='\0';
	printf("qtd = %d\n", quantidade_transicoes);
	for(i = 0; i < quantidade_transicoes; i++)
        printf("%s\n", transicoes[i]);
	// leitura do modo
	scanf("%c",&modo);
	scanf("%c",&modo);
	printf("modo = %c %d\n", modo, modo);
	//leitura de estados finais caso Modo seja F
	if (modo=='F') {
            printf("Entrou no F\n");
	i=0;
	int ret;
	do{
        j = 0;
        ret = scanf("%d", &j);
        printf("%d\n", j);
        if(ret == 0)
            break;
		estados_finais[i]=converte(j);
		i++;
		}while(ret > 0);
	}
	//leitura das cadeias
	i=0;
	j=0;
	do{
		read(0, &caracter, sizeof(char));
		if (caracter=='\n'){
                cadeias[i]=caracter;
                i++;
			}
	}while(caracter !='#');
	int quantidade_cadeias=i;
	cadeias[i-1]='\0';
	i=0;
	//Aqui é que começa a tratar as cadeias separadamente	
	if (modo=='F'){	
		for(i=0;i<quantidade_cadeias;i++) printf("%c",cadeias[i]);
	}
	return 0;	
}

