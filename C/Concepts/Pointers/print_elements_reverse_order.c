#include <stdio.h>

int main(){
	int a[10], *p, i;
	p = a;

	for(i = 0 ; i < 10 ; i++){
		printf("Enter value at %d position: ", i+1);
		scanf("%d", p++);
	}

	for(i = 0 ; i < 10 ; i++){
		printf("%d\n", *--p);
	}
	return 0;
}