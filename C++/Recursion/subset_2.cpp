#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void compute(int ind, vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums, int n){
		ans.push_back(ds);
		for(int i = ind ; i < n ; i++){
			if(i > ind && nums[i] == nums[i-1]) continue;
			ds.push_back(nums[i]);
			compute(i+1, ds, ans, nums, n);
			ds.pop_back();
		}
	}
	void source(vector<int>& nums){
		vector<vector<int>> ans;
		vector<int> ds;
		sort(nums.begin(), nums.end());
		compute(0, ds, ans, nums, nums.size());
		for(auto vec : ans){
			for(auto it : vec){
				cout<<it<<" ";
			}
			cout<<endl;
		}
	}
};

int main(){
	Solution sol;
	vector<int> nums = {1, 2, 2};
	sol.source(nums);
	return 0;
}