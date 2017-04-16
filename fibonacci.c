#include <stdio.h>
#include <stdlib.h>

int fibonacci(int num){
	if (num == 0)
		return 0;
	else{ 
		if(num == 1 || num == 2)
		    return 1;
		else
    			return fibonacci (num-1)+ fibonacci (num-2);
	}
}

int main(){
	int num, i;
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		if(i == num-1)
		printf("%d\n",fibonacci(i));
		else
		printf("%d ",fibonacci(i));
	}
	return 0;
}
