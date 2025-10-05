#include<stdio.h>

int main(){
	int n, i = 0;
	scanf("%d", &n);
	long arr[n];
	arr[0] = 0;
	arr[1] = 1;
	for(i=2;i<n;i++){
		arr[i] = arr[i-1] + arr[i-2];
	}
	for(i=0;i<n;i++){
		printf("%ld\t", arr[i]);
	}
	return 0;
}