#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void compute(vector<int> &nums, int k){
		int prod = 1;
		int l = 0;
		int count = 0;
		for(int r = l + 1; r < nums.size(); r++){
			prod *= nums[r];
			if(prod < k){
				count++;
			}
			else{
				l++;
			}
		}
		cout<<count<<endl;
	}

};

int main(){
	vector<int> nums = {1, 2, 5, 8, 10};
	int k = 15;
	Solution s1;
	s1.compute(nums, k);

	return 0;
}
