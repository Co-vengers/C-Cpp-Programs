#include <stdio.h>

void heapify(int a[], int i, int n);
void build_max_heap(int a[], int n);

int main(){
	int a[] = {3, 5, 10, 4, 6, 9, 2, 8, 7};
	int n = sizeof(a) / sizeof(a[0]);
	int i;
	int temp;

	build_max_heap(a, n);

	for(i = n-1 ; i > 0 ; i--){
		temp = a[i];
		a[i] = a[0];
		a[0] = temp;
		heapify(a, 0, i);
	}

	printf("After sorting:\n");
	for(i = 0 ; i < n ; i++){
		printf("%d\t", a[i]);
	}
	
	return 0;
}

void heapify(int a[], int i, int n){
	int left = (2*i) + 1;
	int right = (2*i) + 2;
	int max = i;
	int temp;

	if(left < n && a[left] > a[max])
		max = left;
	if(right < n && a[right] > a[max])
		max = right;
	if(max != i){
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		heapify(a, max, n);
	}
}

void build_max_heap(int a[], int n){
	int i;
	for(i = (n/2)-1 ; i >= 0 ; i--){
		heapify(a, i, n);
	}
}