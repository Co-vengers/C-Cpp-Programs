#include <iostream>
using namespace std;

int arr[] = {10, 20, 30, 40};
int arr_size = sizeof(arr) / sizeof(arr[0]);

int rec(int arr[], int x, int temp, int i = 0, int exp = 0){
	
	if(i == arr_size){
		return exp;
	}

	temp *= x;

	exp += temp * arr[i];
	return rec(arr, x, temp, i + 1, exp);
}

int main(){
	int x = 2;
	int temp = x;
	cout<<rec(arr, x, temp);
	return 0;
}