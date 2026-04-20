#include <stdio.h>
#include <stdlib.h>

void array(int n, int **p);

int main(){
	int i, n, *p;
	printf("Enter size of array\n");
	scanf("%d", &n);

	array(n, &p);

	printf("Values entered: \n");

	for(i = 0 ; i < n ; i++){
		printf("%d\t", p[i]);
	}
	free(p);
	return 0;
}

void array(int n, int **p){
	int i;

	*p = (int *)malloc(sizeof(int) * n);

	for(i = 0 ; i < n ; i++){
		printf("Enter value at %d position\n", i + 1);
		scanf("%d", &(*p)[i]);
	}
}