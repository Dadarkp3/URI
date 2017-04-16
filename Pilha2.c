#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define MAX 50

int main(void){
	char estados[10];
	int i=0;
	char caracter;
	do{
		caracter=getchar();
		estados[i]=caracter;
		i++;
	}while(caracter !='\n');
	estados[i-1]='\0';
	printf("%s\n",estados);
	return 0;	
}

