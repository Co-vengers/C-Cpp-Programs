#include <stdio.h>

int partition(int a[], int left, int right);
void quicksort(int a[], int left, int right);

int main(){
	int a[] = {3, 5, 20, 15, 8, 9};

	printf("Before sorting:\n");
	int n = sizeof(a) / sizeof(a[0]);

	for(int i = 0 ; i < n ; i++){
		printf("%d\t", a[i]);
	}

	quicksort(a, 0, n-1);

	printf("\nAfter sorting:\n");
	for(int i = 0 ; i < n ; i++){
		printf("%d\t", a[i]);
	}
	return 0;
}

int partition(int a[], int left, int right){
	int i = left - 1;
	int pivot = a[right];
	int j;
	int temp;

	for(j = left ; j < right ; j++){
		if(a[j] < pivot){
			temp = a[++i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	
	temp = a[++i];
	a[i] = a[j];
	a[j] = temp;

	return i;
}

void quicksort(int a[], int left, int right){
	if(left < right){
		int p = partition(a, left, right);
		quicksort(a, left, p-1);
		quicksort(a, p+1, right);
	}
}