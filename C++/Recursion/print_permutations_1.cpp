#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void compute(vector<int>& ds, vector<vector<int>>& ans, vector<int>& nums, vector<int>& freq){
		if(ds.size() == nums.size()){
			ans.push_back(ds);
			return;
		}
		for(int i = 0 ; i < nums.size() ; i++){
			if(!freq[i]){
				ds.push_back(nums[i]);
				freq[i] = 1;
				compute(ds, ans, nums, freq);
				freq[i] = 0;
				ds.pop_back();
			}
		}
	}

	void permute(vector<int>& nums){
		vector<vector<int>> ans;
		vector<int> ds;
		vector<int> freq(nums.size(), 0);
		compute(ds, ans, nums, freq);
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
	vector<int> nums = {1, 2, 3};
	sol.permute(nums);
	return 0;
}