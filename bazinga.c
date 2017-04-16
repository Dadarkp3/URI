#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void verificador(string x, string y, int numero);

int main(void)
{
	int n, int i;
	string raj, sheldon;
	scanf("%d", &n);
	for(i = 1; i <= n; i++);
	{
		scanf("%s %s", sheldon, raj);
		verificador(sheldon, raj, i);
	}
	return 0;
}

void verificador (string x, string y, int numero)
{
	if(strcmp(sheldon, tesoura))
	{
		if(strcmp(raj,'papel') || strcmp(raj,'lagarto')) printf("Caso #%: Bazinga!\n", numero);
		else if (strcmp(raj,'pedra') || strcmp(raj,'Spock')) printf("Caso #%: Raj trapaceou!\n", numero);
		else printf("De novo\n!");
		break;
	
	}
	else if(strcmp(sheldon,'papel'))
	{
		if(strcmp(raj,'pedra') || strcmp(raj,'Spock')) printf("Caso #%: Bazinga!\n", numero);
		else if (strcmp(raj,'tesoura') || strcmp(raj,'lagarto')) printf("Caso #%: Raj trapaceou!\n", numero);
		else printf("De novo\n!");
		break;
	/*}		
	else if(strcmp(sheldon,'pedra'))
	{
		if(raj == 'lagarto' || raj == 'tesoura') printf("Caso #%: Bazinga!\n", numero);
		else if (raj == 'papel' || raj == 'Spock') printf("Caso #%: Raj trapaceou!\n", numero);
		else printf("De novo\n!");
		break;
				
	}
	else if(strcmp(sheldon, 'lagarto'))
	{
		if(raj == 'Spock' || raj == 'papel') printf("Caso #%: Bazinga!\n", numero);
		else if (raj == 'pedra' || raj == 'tesoura') printf("Caso #%: Raj trapaceou!\n", numero);
		else printf("De novo\n!");
		break;
	}	
	else if(strcmp(sheldon,'Spok')
	{
		if(strcmp(raj,'pedra') || strcmp(raj,'tesoura')) printf("Caso #%: Bazinga!\n", numero);
		else if (strcmp(raj,'papel') || strcmp(raj,'lagarto')) printf("Caso #%: Raj trapaceou!\n", numero);
		else printf("De novo\n!");
		break;	
	}*/

}
