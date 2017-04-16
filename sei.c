#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int i=0, j=0;
	char caracter;
	int quantidade_transicoes;
	char transicao_teste[31];
	char transicoes[30][30];
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
	quantidade_transicoes=i;
	transicoes[i][j-1]='\0';
	i = 0;	
	do{
	for(j = 0; transicoes[i][j] != '\0'; j++){
        transicao_teste[j] = transicoes[i][j];
	}
	transicao_teste[j] = '\0';
	printf("A Transição é %s\n",transicao_teste);
	quantidade_transicoes--;
	i++;
	}while(quantidade_transicoes>0);
	return 0;
}
