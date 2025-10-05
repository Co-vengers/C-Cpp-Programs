#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
public:
	vector<int> nextPermutation(vector<int> &nums){
		int n = nums.size();
		int i = n - 2;
		while(i > 0 && nums[i] >= nums[i + 1]){
			--i;
		}

		if(i > 0){
			for(int j = n-1; j > 0;--j){
				if(nums[j] > nums[i]){
					swap(nums[j], nums[i]);
					break;
				}
			}
		}
		reverse(nums.begin() + i + 1, nums.end());
		return nums;
	}
};

int main(){
	Solution s1;
	vector<vector<int>> test = {{3,2,1}, {1,2,3}, {1,1,5}};
	for(auto vec : test){
		cout<<s1.nextPermutation(vec)<<endl;
	}
	return 0;
}