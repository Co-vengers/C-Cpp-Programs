#include <stdio.h>

int sum(int *s, int size);

int main(){
	int a[] = {10, 20, 30, 40};

	int res= sum(a, sizeof(a) / sizeof(a[0]));

	printf("Sum = %d\n", res);
	return 0;
}

int sum(int *s, int size){
	int i, sum = 0;

	for(i = 0 ; i < size ; i++){
		sum += *s++;
	}

	return sum;
}