#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<vector<int>> intervals = {
		{7,7},
		{2,3},
		{1,2},
		{6,11}
	};

	sort(intervals.begin(), intervals.end());
	vector<vector<int>> merged;
	for(auto item : intervals){
		if(merged.empty() || merged.back()[1] < item[0]){
			merged.push_back(item);
		}
		else{
			merged.back()[1] = max(merged.back()[1], item[1]);
		}
	}
	
	for(auto item : merged){
		cout<<item[0]<<" "<<item[1]<<endl;
	}
	return 0;
}

