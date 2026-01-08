#include <stdio.h>

void qsort(int a[], int lower, int upper);
int split(int a[], int lower, int upper);

int main(){
    int a[] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};
    int a_size = sizeof(a) / sizeof(a[0]);
    int i;
    printf("Before sorting\n");
    for(i = 0; i < a_size; i++){
        printf("%d\t", a[i]);
    }
    qsort(a, 0, a_size-1);
    printf("\nAfter sorting:\n");
    for(i = 0; i < a_size; i++){
        printf("%d\t", a[i]);
    }
    return 0;
}
void qsort(int a[], int lower, int upper){
    int temp;
    if(lower < upper){
        temp = split(a, lower, upper);
        qsort(a, lower, temp-1);
        qsort(a, temp+1, upper);
    }
}

int split(int a[], int lower, int upper){
    int pivot = a[lower];
    int left = lower + 1;
    int right = upper;
    int temp;

    while(left <= right){
        while(a[left] < pivot){
            left++;
        }
        while(a[right] > pivot){
            right--;
        }
        
        if(left < right){
            temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }
    temp = a[lower];
    a[lower] = a[right];
    a[right] = temp;

    return right;
}