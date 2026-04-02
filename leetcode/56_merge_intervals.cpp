#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals){
		vector<vector<int>> res;
		sort(intervals.begin(), intervals.end());

		for(auto& interval : intervals){
			if(res.empty()){
				res.push_back(interval);
			}
			else if(interval[0] <= res.back()[1]){
				res.back()[1] = max(res.back()[1], interval[1]);
			}
			else{
				res.push_back(interval);
			}
		}
		return res;
	}
};

int main(){
	Solution s1;
	vector<vector<vector<int>>> tests = {
		{
			{1,3}, {2,6}, {8,7}
		},
		{
			{1,4}, {4,5}
		},
		{
			{4,7}, {1,4}
		}
	};

	for (auto& test : tests) {
    	auto result = s1.merge(test);
    	for (auto& r : result)
        	cout << "[" << r[0] << "," << r[1] << "] ";
    	cout << "\n";
	}

	return 0;
}