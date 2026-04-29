#include <stdio.h>
#include <string.h>

int main(){
	char a[10], *p;

	p = a;

	printf("Enter a string: ");
	gets(a);

	while(*p != '\0'){
		printf("%c\t", *p++);
	}

	printf("\nLength of string: %d", p - a);

	printf("\nAddress of p: %d\n Address of a: %d \n", p, &a);
	return 0;
}