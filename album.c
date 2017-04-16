#include <stdio.h>

int main(){
	int x, y, a, b, c, d;
	char resposta='N';
	scanf("%d %d %d %d %d %d", &x, &y, &a, &b, &c, &d);
	if ((a + c <= x) && (b <= y) && (d <= y)) resposta='S';
	if ((a + d <= x) && (b <= y) && (c <= y)) resposta='S';
	if ((b + c <= x) && (a <= y) && (d <= y)) resposta='S';
	if ((b + d <= x) && (a <= y) && (c <= y)) resposta='S';
      	if ((a + c <= y) && (b <= x) && (d <= x)) resposta='S';
       	if ((a + d <= y) && (b <= x) && (c <= x)) resposta='S';
      	if ((b + c <= y) && (a <= x) && (d <= x)) resposta='S';
      	if ((b + d <= y) && (a <= x) && (c <= x)) resposta='S';
	printf("%c\n", resposta);
	return 0;
}
