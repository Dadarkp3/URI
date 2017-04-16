#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define tamanhoFila 100

typedef struct FilaInt{
	int conteudo[tamanhoFila];
	int primeiro, nElems;
}filaInt;

void inicializar(filaInt *f);
_Bool consulta(filaInt f, int x);
_Bool enfileira(filaInt *f, int x);
_Bool desenfileira(filaInt *f);

int main(){
	filaInt f;
	inicializar(&f);
	enfileira(&f,1);
	enfileira(&f,2);
	enfileira(&f,3);
	enfileira(&f,1);
	desenfileira(&f);
	consulta(f,1);
	return 0;
	
}

void inicializar(filaInt *f){
	f->nElems = 0;
	f->primeiro = 0;
}

_Bool consulta(filaInt f, int x){
	int i;	
	if(f.nElems == 0) return false;
	for(i=f.primeiro; i < (f.primeiro+f.nElems) && f.conteudo[i] != x; i++);
	return (f.conteudo[i] == x);
}

_Bool enfileira(filaInt *f, int x)
{
	if(!(consulta(*f,x)) || (f->primeiro + f->nElems) == tamanhoFila) return false;
	f->conteudo[f->primeiro+f->nElems] = x;
	f->nElems++;
	return true; 
}

_Bool desenfileira(filaInt *f)
{
	if(f->nElems == 0) return false;
	f->primeiro++;
	f->nElems--;
	return true;
}
