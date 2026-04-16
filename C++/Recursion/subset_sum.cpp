#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	void compute(int ind, vector<int>& sums, vector<int>& nums, int sum, int n){
		if(ind == n){
			sums.push_back(sum);
			return;
		}
		sum += nums[ind];
		compute(ind+1, sums, nums, sum, n);
		sum -= nums[ind];
		compute(ind+1, sums, nums, sum, n);
	}

	void source(int n, vector<int>& nums){
		vector<int> sums;
		compute(0, sums, nums, 0, n);
		sort(sums.begin(), sums.end());
		for(auto it : sums){
			cout<<it<<" ";
		}
	}
};

int main(){
	Solution sol;
	vector<int> nums = {5, 2, 1};
	int n = 3;
	sol.source(n, nums);
	return 0;
}