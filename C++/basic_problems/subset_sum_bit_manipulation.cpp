#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	void compute(int n, vector<int>& nums){
		vector<int> sums;

		for(int i = 0 ; i < 1 << n ; i++){
			int sum = 0;
			for(int j = 0 ; j < n ; j++){
				if(i & (1 << j)){
					sum += nums[j];
				}
			}
			sums.push_back(sum);
		}
		sort(sums.begin(), sums.end());
		for(auto it : sums){
			cout<<it<<" ";
		}
	}
};

int main(){
	Solution sol;
	int n = 3;
	vector<int> nums = {5, 2, 1};
	sol.compute(n, nums);
	return 0;
}