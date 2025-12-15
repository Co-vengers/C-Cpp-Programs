#include <iostream>
using namespace std;

class Solution{
	public:
		int compute(int nums){
			if(nums == 0 || nums == 1){
				return 1;
			}
			else{
				return nums * compute(nums - 1);
			}
		}

};

int main(){
	int num = 5;
	Solution s1;
	int res = s1.compute(num);
	cout<<res<<endl;
	return 0;
}