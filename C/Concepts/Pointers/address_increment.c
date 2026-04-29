#include <stdio.h>

int main(){
	int a = 10, *p;

	p = &a;
	p++; // ++p; // *p++ => * (p++);
	printf("%d\n%d\n%d\n%d", a, &a, p, *p);
	return 0;
}