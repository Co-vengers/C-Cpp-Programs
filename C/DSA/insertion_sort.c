#include <stdio.h>

int main(){
	int arr[] = {7, 5, 15, 20, 1, 25};
	int i, key, j, n = 6, temp;

	for(i = 1 ; i < n ; i++){
		key = arr[i];
		j = i - 1;

		// dry run analysis
		printf("Pass %d\n", i);

		printf("Current Window:\n");
		for(temp = 0 ; temp <= i ; temp++){
			printf("%d\t", arr[temp]);
		}
		printf("\n");

		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;

		// dry run analysis
		if(arr[i] == key){
			for(temp = 0 ; temp <= i ; temp++){
				printf("%d\t", arr[temp]);
			}
			printf("\nInserted %d at position %d\n\n", key, i + 1);
		}
		else{
			for(temp = 0 ; temp <= i ; temp++){
				printf("%d\t", arr[temp]);
			}
			printf("\nInserted %d at position %d\n\n", key, j + 2);
		}
	}

	return 0;
}