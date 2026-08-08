#include <stdio.h>
#include <unistd.h>

int main(){
	int i;
	i = fork();

	if(i == 0)
		printf("Child");
	else
		printf("Parent\n");

	return 0;
}