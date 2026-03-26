#include <iostream>
using namespace std;

class Solution{
public:
	int compute(int num, int pow){
		if(pow == 0){
			return 1;
		}
		else if(pow == 1){
			return num;
		}
		else{
			return num * compute(num, pow - 1);
		}
	}

};

int main(){
	int num = 2, pow = 10;

	Solution s1;
	int res = s1.compute(num, pow);
	cout<<res<<endl;

	return 0;
}