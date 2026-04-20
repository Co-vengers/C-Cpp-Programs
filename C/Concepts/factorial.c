#include<stdio.h>
// #include<conio.h>

int main(){
	int n, f = 1, temp;

	printf("Enter a number:");
	scanf("%d", &n);temp = n;
	while(n > 1){
		f = f * n;
		n--;
	}
	printf("Factorial of %d = %d", temp, f);
	return 0;
}