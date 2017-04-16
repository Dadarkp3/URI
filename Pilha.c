#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define MAX 1000

int main(void){
	char estados[10];
	char alfabeto_linguagem[30];
	char alfabeto_pilha[30];
	char transicoes[30];
	int i=0, j=0;
	char modo;	
	char caracter;
	char cadeias[30];
	char estados_finais[30];
	//leitura dos estados	
	do{
		caracter=getchar();
		estados[i]=caracter;
		i++;
	}while(caracter !='\n');
	estados[i-1]='\0';
	//leitura do alfabeto_linguagem
	i=0;
	do{
		caracter=getchar();
		alfabeto_linguagem[i]=caracter;
		i++;
	}while(caracter !='\n');
	alfabeto_linguagem[i-1]='\0';
	//leitura do alfabeto_pilha
	i=0;
	do{
		caracter=getchar();
		estados[i]=caracter;
		i++;
	}while(caracter !='\n');
	alfabeto_pilha[i-1]='\0';
	i=0;
	j=0;
	//leitura das funções de transição
	do{
			caracter=getchar();	 
			transicoes[i]=caracter;
			i++;			
	}while(caracter !='#');
	transicoes[i-1]='\0';
	// leitura do modo
	modo=getchar();
	//leitura de estados finais caso Modo seja F
	if (modo=='F') {
	i=0;
	do{
		caracter=getchar();	 
		estados_finais[i]=caracter;
		i++;			
		}while(caracter !='\n');
	i=0;
	}
	do{
		caracter=getchar();	 
		cadeias[i]=caracter;
		i++;			
		}while(caracter !='\n');		
	return 0;	
}
