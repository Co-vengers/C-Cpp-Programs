#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> nums;
		for(int i = 0 ; i < 7 ; i++){
			int inp;
			cin>>inp;
			nums.push_back(inp);
		}
		sort(nums.begin(), nums.end());
		int sum = 0;
		for(int i = 0 ; i < 6 ; i++){
			sum += nums[i] * -1;
		}
		sum += nums[nums.size() - 1];
		cout<<sum<<endl;
	}
	return 0;
}