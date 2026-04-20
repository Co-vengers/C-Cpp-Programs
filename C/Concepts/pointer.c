#include<stdio.h>

int main(){
	int i, *p;

	i = 10;
	// p stores address of i
	p = &i;

	// prints address of i
	printf("%p\n", p);

	// prints value stored at address of i
	printf("%d", *p);
	return 0;	
}