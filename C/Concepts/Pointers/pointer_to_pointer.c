#include <stdio.h>

int main(){
	int a = 10, *p, **q;

	p = &a;
	q = &p;

	printf("%d\n%d\n%d\n%d\n%d", p, *p, q, *q, **q);
	return 0;
}