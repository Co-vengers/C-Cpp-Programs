#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> arr = {2, 4, 8, 12, 10};
	int target = 16, sum = 0, max_len = 0;

	for(int i = 0; i < arr.size(); i++){
		for(int j = i; j < arr.size(); j++){
			sum += arr[j];
			if(sum <= target){
				max_len = max(max_len, j-i+1);
			}
			else if(sum > target){
				break;
			}
		}
	}
	cout<<"max length = "<<max_len<<endl;

	return 0;
}