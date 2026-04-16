#include <iostream>
#include <vector>
using namespace std;

int compute(int ind, vector<int>& arr, int n, int s, int sum){
	if(s > sum) return 0;
	if(ind == n){
		if(s == sum){
			return 1;
		}
		return 0;
	}
	s += arr[ind];
	int left = compute(ind+1, arr, n, s, sum);

	s -= arr[ind];
	int right = compute(ind+1, arr, n, s, sum);

	return left + right;
}
int main(){
	vector<int> arr = {1, 2, 1};

	int sum = 2;

	cout<<compute(0, arr, arr.size(), 0, sum);

	return 0;
}