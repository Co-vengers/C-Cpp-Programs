#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	vector<int> twoSum(vector<int>& nums, int target){
		vector<int> res;
		int l = 0;
		int curr_sum = 0;
		
		for(int r  = l + 1 ; r < nums.size() ; i++){
			curr_sum += nums[r];

			if(curr_sum == target){
				res.push_back(l);
				res.push_back(r);
			}
			else if(curr_sum > target){
				curr_sum -= nums[l--];
			}
		}
		return res;
	}
};

int main(){
	Solution sol;
	vector<vector<int>> tests = {
		{2,7,11,15},
		{}
	}

	return 0;
}