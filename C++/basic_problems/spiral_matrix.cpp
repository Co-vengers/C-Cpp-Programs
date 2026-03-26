#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
	void compute(vector<int> &nums){
		int count = 0, tr = 0, br = nums.size(), lc = 0, rc = nums[0].size();
		while(count < 36){
			int r, c;
			for(c = lc, c < rc; c++){
				cout<<nums[tr][c]<<endl; count++;
			}
			tr++;
			for(r = tr, r <= br, r++){
				cout<<nums[r][c]<<endl;count++;
			}
			rc--;
			for(c = rc; c >= lc; c++){
				cout<<nums[br][c]<<endl;count++;
			}
			br--;
			for(r = br; r >= tr; r++){
				cout<<nums[r][c]<<endl;count++;
			}
			lc++;
		}

	}

};


int main(){
	Solution s1;
	int n = 6;
	vector<vector<int>> nums(n, vector<int>(n));
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			nums[i][j] = i * 10 + j;
		}
	}

	for (int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			cout<<nums[i][j]<<" ";
		}
		cout<<endl;
	}
 	s1.compute(nums);
	return 0;
}