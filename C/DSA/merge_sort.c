#include <stdio.h>

void merge(int a[], int left, int mid, int right);
void mergeSort(int a[], int left, int right);

int main(){
	int a[] = {20, 4, 5, 8, 11, 14, 32, 1};
	printf("Before sorting:\n");
	int n = sizeof(a) / sizeof(a[0]);

	for(int i = 0 ; i < n ; i++){
		printf("%d\t", a[i]);
	}

	mergeSort(a, 0, n-1);

	printf("\nAfter sorting:\n");
	for(int i = 0 ; i < n ; i++){
		printf("%d\t", a[i]);
	}
}

void merge(int a[], int left, int mid, int right){
    int ds[right - left + 1];

    int i = left;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= right){
        if(a[i] <= a[j]){
            ds[k++] = a[i++];
        }
        else{
            ds[k++] = a[j++];
        }
    }

    while(i <= mid){
        ds[k++] = a[i++];
    }

    while(j <= right){
        ds[k++] = a[j++];
    }
    
    for(i = left; i <= right; i++){
        a[i] = ds[i - left];
    }
}

void mergeSort(int a[], int left, int right){
	if(left < right){
		int mid = (left + right) / 2;	
		mergeSort(a, left, mid);
		mergeSort(a, mid+1, right);
		merge(a, left, mid, right);
	}
}