#include <stdio.h>
#include <string.h>

int main(){
	char a[10], *p, *q;
	int i, f=0;

	p = a;

	printf("Enter a string: \n");
	fgets(a, sizeof(a), stdin);

	i = strlen(a) - 1;

	q = &a[i];

	while(p < q){
		if(*p != *q){
			f = 1;
			break;
		}
		p++; q--;
	}

	if(f){
		printf("Not palindrome");
	}
	else{
		printf("Palindrome");
	}

	return 0;
}