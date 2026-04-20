#include <stdio.h>

void show();

int main(){
	show();
	return 0;
}

void show(){
	static int i = 1;
	if(i < 10){
		printf("%d\t", i);
		i++;
		show();
	}
}