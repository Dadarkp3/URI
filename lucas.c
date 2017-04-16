#include <stdio.h>

int main(){
    int m, n, aux, i, soma = 0;
    do
    {
	soma=0;
	scanf("%d %d", &m, &n);
	if(m <=0 || n <=0) break;
	else{
  		if (m > n){
			aux=m;
			m=n;
			n=aux;
		}
		for(i=m; i<=n; i++){
			printf("%d ", i);
			soma+=i;
		
		}
	printf("Sum=%d\n",soma);
	}
    } while(m > 0 && n > 0);
    return 0;
}
