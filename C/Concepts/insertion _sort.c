#include <stdio.h>

int main() {
    int a[] = {50, 20, 10, 40, 30};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements in the array
    int i, j, temp;

    for (i = 1; i < n; i++) {
        j = i - 1;
        temp = a[i];

        while (j >= 0 && a[j] > temp) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp; // Place temp in its correct position
    }

    // Print the sorted array
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}