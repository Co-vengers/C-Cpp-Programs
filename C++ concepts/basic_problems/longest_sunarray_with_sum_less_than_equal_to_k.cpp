#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	void compute(vector<int> &nums, int k){
		int l = 0, max_len = 0, sum = 0;
		for(int r = 0; r < nums.size(); r++){
			sum += nums[r];
			if(sum <= k){
				max_len = max(max_len, r - l + 1);
			}
			else{
				sum = 0;
				r = l;
				l++;
				continue;
			}
		}
		cout<<max_len<<endl;
	}
};

int main(){
	vector<int> nums = {1, 2, 3, 4, 5 , 6, 7, 8};
	int k = 18;
	Solution s1;
	s1.compute(nums, k);
	return 0;
}