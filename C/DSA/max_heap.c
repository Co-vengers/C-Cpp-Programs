#include <stdio.h>

void heapify(int a[], int i, int n);
void buld_max_heap(int a[], int n);

int main(){
	int a[] = {3, 5, 10, 4, 6, 9, 2, 8, 7};
	int n = sizeof(a) / sizeof(a[0]);
	int i;

	buld_max_heap(a, n);

	printf("Max heap:\n");
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

	// it might be possible that last non-leaf node has one left child
	// so it is necessary to check if right child exist or not
	// if right child of last non-leaf node exist, then the index of that child would be (n-1)
	if(left < n && a[left] > a[max])
		max = left;
	if(right < n && a[right] > a[max])
		max = right;
	if(max != i){
		temp = a[i];
		a[i] = a[max];
		a[max] = temp;
		// if root element of sub tree is swapped check for the max-heap below that sub tree
		heapify(a, max, n);
	}
}

void buld_max_heap(int a[], int n){
	int i;
	// (n/2)-1 => last non-leaf node
	// we perform heapification for all the sub trees from last non-leaf node to root node
	for(i = (n/2)-1 ; i >= 0 ; i--){
		heapify(a, i, n);
	}
}