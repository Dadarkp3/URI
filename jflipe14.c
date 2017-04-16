#include <stdio.h>

int main(void) {
	int P, R;
	scanf("%d %d", &P, &R);
	if (!P) printf("C\n");
	else
	{
		if(R) printf("A\n");
		else printf("B\n");
	}
	return 0;
}
