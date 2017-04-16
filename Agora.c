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
	char cadeias[MAX][MAX];
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
		transicoes[i][j]=caracter;		
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
	do{
		read(0, &caracter, sizeof(char));
		estados_finais[i]=caracter;
		i++;
	}while(caracter !='\n');

	
	printf("teste\n");
	//leitura das cadeias
	i=0;
	j=0;
	do{
		read(0, &caracter, sizeof(char));
		cadeias[i][j]=caracter;
		if (caracter=='\n'){
			cadeias[i][j]='\0';
				i++;
				j=0;
			}else{
                cadeias[i][j]=caracter;
                j++;
			}
				printf("teste223232\n");
	}while(caracter !='#');
	printf("teste2\n");
	int quantidade_cadeias=i;
	for(i = 0; i < quantidade_cadeias; i++)
        printf("%s\n", cadeias[i]);
	cadeias[i][j-1]='\0';
	i = 0;
	//Aqui é que começa a tratar as cadeias separadamente
	do{
		k = 0;
		for(j = 0; cadeias[i][j] != '\0'; j++){
	        cadeia_teste[j] = cadeias[i][j];
		}
		cadeia_teste[j] = '\0';
		do{
			for(j = 0; transicoes[k][j] != '\0'; j++){
		        transicoes_teste[j] = transicoes[k][j];
			}
			transicoes_teste[j] = '\0';
			flag=estados[0];
			if(modo=='F') {
				int x = MAX;
				int count = 0;
				int y = 0;
				for (z = 0; cadeia_teste[z]!='\0'; z++){
					for (j = 0; transicoes_teste[j]!='\0'; j++) {
						y++;
						if (transicoes_teste[j]==cadeia_teste[z] && flag==transicoes_teste[j-2]) {
							flag=transicoes_teste[j+6];
						}
						if (cadeia_teste[z+1]=='\0' && transicoes_teste[j+1]=='\0' && quantidade_transicoes==y) {
							while(x > 0){
								if(estados_finais[x]==flag){
									count++;
								}
							x--;
							}

							if (count > 0) {
								printf("cadeia %s aceita por estado final \n",cadeia_teste);
							} else { printf("cadeia %s nao aceita por estado final \n",cadeia_teste); }

						}
					}
				}

			}
			
			
			
			if(modo=='P') {
				int x = MAX;
				int count = 0;
				int y = 0;
				for (z = 0; cadeia_teste[z]!='\0'; z++){
					for (j = 0; transicoes_teste[j]!='\0'; j++) {
						y++;
						if (transicoes_teste[j]==cadeia_teste[z] && flag==transicoes_teste[j-2]) {
							flag=transicoes_teste[j+6];
						}
						if (cadeia_teste[z+1]=='\0' && transicoes_teste[j+1]=='\0' && quantidade_transicoes==y) {
							while(x > 0){
								if(flag=='-'){
									count++;
								}
							x--;
							}

							if (count > 0) {
								printf("cadeia %s aceita por pilha \n",cadeia_teste);
							} else { printf("cadeia %s nao aceita por pilha \n",cadeia_teste); }

						}
					}
				}

			}
			
		//você faz as verificações aqui nesta parte, ai quando termina de verificar uma cadeia, ele já passa pro próximo

		quantidade_transicoes--;
		k++;

		}while(quantidade_transicoes>0);

		quantidade_cadeias--;
		i++;

	}while(quantidade_cadeias>0);
}
	scanf(" jhkhjkhk");

}
